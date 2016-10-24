//volatile int state = 0;
//
//void setup_interrupts(){
//  attachInterrupt(0, setMROn, RISING);  ///MR  --->  mootor right
//  attachInterrupt(0, setMROff,FALLING);
//  attachInterrupt(1, setMLOn, RISING);  ///MR  --->  mootor left
//  attachInterrupt(1, setMLOff,FALLING);
//  attachInterrupt(2, setFOn, RISING);  ///F  --->  Roof Fan
//  attachInterrupt(2, setFOff,FALLING);
//  attachInterrupt(3, setVOn, RISING);  ///V  --->  Ventilation
//  attachInterrupt(3, setVOff,FALLING);
//  attachInterrupt(4, setDOn, RISING);  ///D  --->  Door
//  attachInterrupt(4, setDOff,FALLING);
//  attachInterrupt(5, setEBOn, RISING);  ///EB  --->  Emergency Button
//  attachInterrupt(5, setEBOff,FALLING);
//}
//
//void setMROn(){
////  digitalWrite(21,HIGH);
////  state = 1;
////  Serial.println("high");
////  Motor_R=state;
//}
//void setMROff(){
////  Motor_R = 0;
////Serial.println("Low");
//}
//void setMLOn(){
//  Motor_L = 1;
//}
//void setMLOff(){
//  Motor_L = 0;
//}
//void setFOn(){
//  Fan = 1;
//}
//void setFOff(){
//  Fan = 0;
//}
//void setVOn(){
//  Vent = 1;
//}
//void setVOff(){
//  Vent = 0;
//}
//void setDOn(){
//  Door_1 = 1;
//}
//void setDOff(){
//  Door_1 = 0;
//}
//void setEBOn(){
//  Emergency_Stop = 1;
//}
//void setEBOff(){
//  Emergency_Stop = 0;
//}
