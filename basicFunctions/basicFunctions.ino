#include <relay8.h>
//#include <Time.h>
//#include <TimeAlarms.h>
//#include <DS1307RTC.h>
#include <Wire.h>
#include <SPI.h>
#include <Ethernet.h>
//#include <EthernetUdp.h>
#include <aREST.h>
#include <avr/wdt.h>
#include <SHT1x.h>
#include <E2.h>
#include <OneWire.h>
#include <DallasTemperature.h>

// Declare what pins our relays are connected to.
// relay8 supports from 1 to 8 relays.
relay8 relay(22,23,24,25,26,27,28,29);
relay8 relay2(30,31,32,33,34,35,36,37);
//
////// SHT10 SENSOR 
#define dataPin  7
#define clockPin 8
/////////////////// DS18B20 PIN
#define ONE_WIRE_BUS 9

///////////////////////////////////////////////////////////// GLOBAL VARIABLES ///////////////////////////
/////  SENSORS///////
float sunlight_in = 0.0;
float sunlight_out = 0.0;
float soil_temp = 0.0;
float soil_hum = 0.0;
float air_temp_in = 0.0;
float air_hum_in = 0.0;
float air_temp_out = 0.0;
float air_hum_out = 0.0;

///////   FLAGS   ///////
int Motor_F = 0;
int Motor_B = 0;
int Motor_R = 0;
int Motor_L = 0;
int Fan = 0;
int Vent = 0;
int Door_1 = 0;
int Emergency_Stop = 0;


//int roofVentTime = 600;  //10 minutes
//int stirTime = 30;  ////// 30 seconds
//int railVentTime = 10;  /// 10 seconds 
//int roofFanTime = 300;
//int wateringTime = 60000;   //// 1 minute
//int timeOfStir = 12;

//tmElements_t tm;
//
//byte influxServer [] ={192,168,1,67};
//int port = 4444;
//String data ="biotemp,arduino=01,sensor=01 value=0.198";

// Ethernet server
EthernetServer ethernetServer(8888);

///////////////////////// Create aREST instance
aREST rest = aREST();

/////////////////////////////////////////////////////////// END OF GLOBAL VARIABLES ///////////////////////////

void setup() {
  pinMode(21, INPUT);
  pinMode(3, INPUT);
  // put your setup code here, to run once:
  Serial.begin(115200);
//  timeSetup();//////////////////////////////////        set the System Time  ///////////////////////
//  netSetup();
  setupRest();
//  setupTasks();
  
}

void loop() {
  // put your main code here, to run repeatedly:
//  Alarm.delay(100); // wait one second between clock display
  restLoop();
//  readSensors();
  
}



