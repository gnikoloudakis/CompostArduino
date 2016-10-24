
  ///////////////// SETUP EE08T22   E2 INTERFACE SENSOR /////////////////////
  E2_Device EE08T22sensor(20,21); //SDA=20 SCL=21

  //OneWire oneWire(ONE_WIRE_BUS);
  OneWire oneWire(9);
  DallasTemperature sensors(&oneWire);//ambient temp

//////////////////////////////////////////////////// Digital Temp DS18B20 ///////////////////////////////////////////////////////////////////

  

/////////////////    setup SHT10   Air Temperature / Air Humidity
SHT1x sht1x(7, 8);//soil


void readDS18B20(){
  sensors.begin();///start ambient temp
    // call sensors.requestTemperatures() to issue a global temperature 
  // request to all devices on the bus
//  Serial.print(F("Requesting temperatures..."));
  sensors.requestTemperatures(); // Send the command to get temperatures
//  Serial.println(F("DONE"));
  soil_temp = sensors.getTempCByIndex(0);
//  Serial.print(F("Temperature for the device 1 (index 0) is: "));
//  Serial.println(soil_temp);  
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////  Vegetronix ////////////////////////////////////////////////////////////////
//void readVegetronixSoilMoist(){
//  Serial.println(F("Secondary Soil Moisture"));
//  soil_hum = analogRead(0); 
//  Serial.print(soil_hum);
//  Serial.println(F("%"));
//}
void readVH400(int analogPin) {
  // This function returns Volumetric Water Content by converting the analogPin value to voltage
  // and then converting voltage to VWC using the piecewise regressions provided by the manufacturer
  // at http://www.vegetronix.com/Products/VH400/VH400-Piecewise-Curve.phtml
  
  // NOTE: You need to set analogPin to input in your setup block
  //   ex. pinMode(<analogPin>, INPUT);
  //   replace <analogPin> with the number of the pin you're going to read from.
  
  // Read value and convert to voltage  
  int sensor1DN = analogRead(analogPin);
  float sensorVoltage = sensor1DN*(3.0 / 1023.0);
  float VWC;
  
  // Calculate VWC
  if(sensorVoltage <= 1.1) {
    VWC = 10*sensorVoltage-1;
  } else if(sensorVoltage > 1.1 && sensorVoltage <= 1.3) {
    VWC = 25*sensorVoltage-17.5;
  } else if(sensorVoltage > 1.3 && sensorVoltage <= 1.82) {
    VWC = 48.08*sensorVoltage-47.5;
  } else if(sensorVoltage > 1.82) {
    VWC = 26.32*sensorVoltage-7.89;
  }
//  return(VWC);
soil_hum = map(VWC, 0, 37.8, 0, 100);   ///  returns percentage of moisture
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////  SHT10  //////////////////////////////////////////////////////////////
  
//double temp_c;
//double temp_f;
//double humidity;  
//SHT1x sht1x(dataPin, clockPin);//soil
  
void readSHT10(){
    // Read values from the sensor
  air_temp_in = sht1x.readTemperatureC();
//  temp_f = sht1x.readTemperatureF();
  air_hum_in = sht1x.readHumidity();

  // Print the values to the serial port
//  Serial.print(F("Temperature: "));
//  Serial.print(soiltemp1, DEC);
//  Serial.print(F("C / "));
//  Serial.print(temp_f, DEC);
//  Serial.print(F("F. Humidity: "));
//  Serial.print(soilhum1);
//  Serial.println(F("%"));

  delay(1000);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////// PhotoResistor //////////////////////////////////////////////////////////////////////////////// 8elei na to ksanadoume    einai copy paste apo playground
/* Simple test of the functionality of the photo resistor

Connect the photoresistor one leg to pin 0, and pin to +5V
Connect a resistor (around 10k is a good value, higher
values gives higher readings) from pin 0 to GND. (see appendix of arduino notebook page 37 for schematics).

----------------------------------------------------

           PhotoR     10K
 +5    o---/\/\/--.--/\/\/---o GND
                  |
 Pin 0 o-----------

----------------------------------------------------
*/
//
//int lightPin = 0;  //define a pin for Photo resistor
//int ledPin=11;     //define a pin for LED
//
//void setup()
//{
//    Serial.begin(9600);  //Begin serial communcation
//    pinMode( ledPin, OUTPUT );
//}
//
//void loop()
//{
//    Serial.println(analogRead(lightPin)); //Write the value of the photoresistor to the serial monitor.
//    analogWrite(ledPin, analogRead(lightPin)/4);  //send the value to the ledPin. Depending on value of resistor 
//                                                //you have  to divide the value. for example, 
//                                                //with a 10k resistor divide the value by 2, for 100k resistor divide by 4.
//   delay(10); //short delay for faster response to light.
//}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void readEE08T22(){
  float hum = EE08T22sensor.RH_read();
  Serial.print("Air HUidity Outside :");
  Serial.println(hum);
  float temp = EE08T22sensor.Temp_read();
  Serial.print("Air Temperature Outside :");
  Serial.println(temp);
  if(temp>0){
    air_temp_out = temp;
  }
  if(hum>0){
    air_hum_out = hum;
  }
}

void readSensors(){
  readSHT10();
  readDS18B20();
  readVH400(0);
  readEE08T22();
}

