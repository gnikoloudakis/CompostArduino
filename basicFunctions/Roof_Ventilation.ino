void startVent(){
  relay2.on(1);
  delay(500);
  relay2.off(1);
  delay(500);
//  if(digitalRead(vent_pin)==HIGH){
//    Vent = 1;
//  }
//  else{
//    Vent = 0;
//  }
Vent = 1;
}
void stopVent(){
  relay2.on(2);
  delay(500);
  relay2.off(2);
  delay(500);
//  if(digitalRead(vent_pin)==LOW){
//    Vent = 0;
//  }
//  else{
//    Vent = 1;
//  }
Vent = 0;
}
