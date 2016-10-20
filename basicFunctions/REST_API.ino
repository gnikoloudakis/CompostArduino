
void setupRest(){
  ///////     SENSORS   ///////
  rest.variable("sunlight_in",&sunlight_in);
  rest.variable("sunlight_out",&sunlight_out);
  rest.variable("soil_temp",&soil_temp);
  rest.variable("soil_hum",&soil_hum);
  rest.variable("air_temp_in",&air_temp_in);
  rest.variable("air_hum_in",&air_hum_in);
  rest.variable("air_temp_out",&air_temp_out);
  rest.variable("air_hum_out",&air_hum_out);

  /////    FLAGS   ///////
  rest.variable("Motor_F", &Motor_F);
  rest.variable("Motor_B", &Motor_B);
  rest.variable("Motor_R", &Motor_R);
  rest.variable("Motor_L", &Motor_L);
  rest.variable("Fan", &Fan);
  rest.variable("Vent", &Vent);
  rest.variable("Door_1", &Door_1);
  rest.variable("Emergency_Stop", &Emergency_Stop);

  /////   STIR FUNTCTIONS ///////
  rest.function("stirForwardOn", stirForwardOn);
  rest.function("stirForwardOff", stirForwardOff);
  rest.function("stirBackwardOn", stirBackwardOn);
  rest.function("stirBackwardOff", stirBackwardOff);
  rest.function("stirRightOn", stirRightOn);
  rest.function("stirRightOff", stirRightOff);
  rest.function("stirLeftOn", stirLeftOn);
  rest.function("stirLeftOff", stirLeftOff);
  
  ///////    FAN FUNCTIONS /////
  rest.function("startFan", startFan);
  rest.function("stopFan", stopFan);
  
  //////   VENTILATION FUNCTIONS
  rest.function("startVent", startVent);
  rest.function("stopVent", stopVent);
  ///////// EMERGENCY FUNCTIONS ///////
  rest.function("Emergency_Stop_ON", Emergency_Stop_ON);
  rest.function("Emergency_Stop_OFF", Emergency_Stop_OFF);
  
  //////    TEST FUNCTIONS   ///////
  rest.function("relayon",relayon);
  rest.function("relayoff",relayoff);
 
 
  // Give name and ID to device
  rest.set_id("001");
  rest.set_name("Compost_Ilioupoli");


  // Start watchdog
  wdt_enable(WDTO_4S);
  Serial.println("Rest OK!");

}

void restLoop(){
    EthernetClient client = ethernetServer.available();
    rest.handle(client);
//    rest.handle(Serial);
    wdt_reset();
    
}

