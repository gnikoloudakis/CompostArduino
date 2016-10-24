void startFan(){
  relay2.on(3);
  delay(500);
  relay2.off(3);
  delay(500);
//  if(digitalRead(fan_pin)==HIGH){
//    Fan = 1;
//  }
//  else{
//    Fan= 0;
//  }
Fan = 1;
}
void stopFan(){
  relay2.on(4);
  delay(500);
  relay2.off(4);
  delay(500);
//  if(digitalRead(fan_pin)==LOW){
//    Fan = 0;
//  }
//  else{
//    Fan= 1;
//  }
Fan = 0;
}

