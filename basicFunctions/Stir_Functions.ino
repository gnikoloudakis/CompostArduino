void stirForwardOn(){
  relay.on(1);
  delay(500);
  relay.off(1);
  delay(500);
//  if(digitalRead(motor_f_pin)==HIGH){
//    Motor_F = 1;
//  }
//  else{
//    Motor_F = 0;
//  }
Motor_F = 1;
}
void stirForwardOff(){
  relay.on(2);
  delay(500);
  relay.off(2);
  delay(500);
//  if(digitalRead(motor_f_pin)==LOW){
//    Motor_F = 0;
//  }
//  else{
//    Motor_F = 1;
//  }
Motor_F = 0;
}

void stirBackwardOn(){
  relay.on(3);
  delay(500);
  relay.off(3);
  delay(500);
//  if(digitalRead(motor_b_pin)==HIGH){
//    Motor_B = 1;
//  }
//  else{
//    Motor_B = 0;
//  }
Motor_B = 1;
}
void stirBackwardOff(){
  relay.on(4);
  delay(500);
  relay.off(4);
  delay(500);
//  if(digitalRead(motor_b_pin)==LOW){
//    Motor_B = 0;
//  }
//  else{
//    Motor_B = 1;
//  }
Motor_B = 0;
}
void stirRightOn(){
  relay.on(5);
  delay(500);
  relay.off(5);
  delay(500);
//  if(digitalRead(motor_r_pin)==HIGH){
//    Motor_R = 1;
//  }
//  else{
//    Motor_R = 0;
//  }
Motor_R = 1;
}
void stirRightOff(){
  relay.on(6);
  delay(500);
  relay.off(6);
  delay(500);
//  if(digitalRead(motor_r_pin)==LOW){
//    Motor_L = 0;
//  }
//  else{
//    Motor_L = 1;
//  }
Motor_R = 0;
}
void stirLeftOn(){
  relay.on(7);
  delay(500);
  relay.off(7);
  delay(500);
//  if(digitalRead(motor_l_pin)==HIGH){
//    Motor_L = 1;
//  }
//  else{
//    Motor_L = 0;
//  }
Motor_L = 1;
}
void stirLeftOff(){
  relay.on(8);
  delay(500);
  relay.off(8);
  delay(500);
//  if(digitalRead(motor_l_pin)==LOW){
//    Motor_L = 0;
//  }
//  else{
//    Motor_L = 1;
//  }
Motor_L = 0;
}
