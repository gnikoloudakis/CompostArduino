void flagloop(){
  if(digitalRead(motor_f_pin)==HIGH){
    Motor_F = 1;
  }
  else{
    Motor_F = 0;
  }
  if(digitalRead(motor_b_pin)==HIGH){
    Motor_B = 1;
  }
  else{
    Motor_B = 0;
  }
  if(digitalRead(motor_r_pin)==HIGH){
    Motor_R = 1;
  }
  else{
    Motor_R = 0;
  }
  if(digitalRead(motor_l_pin)==HIGH){
    Motor_L = 1;
  }
  else{
    Motor_L = 0;
  }
  if(digitalRead(fan_pin)==HIGH){
    Fan = 1;
  }
  else{
    Fan = 0;
  }
  if(digitalRead(vent_pin)==HIGH){
    Vent = 1;
  }
  else{
    Vent = 0;
  }
  if(digitalRead(door_pin)==HIGH){
    Door_1 = 1;
  }
  else{
    Door_1 = 0;
  }
  if(digitalRead(stop_pin)==HIGH){
    Emergency_Stop = 1;
  }
  else{
    Emergency_Stop = 0;
  }
}

void Emergency_Stop_ON(){
  if(digitalRead(stop_pin)==HIGH){
    Emergency_Stop = 1;
  }
  else{
    Emergency_Stop = 0;
  }
}
void Emergency_Stop_OFF(){
  if(digitalRead(stop_pin)==LOW){
    Emergency_Stop = 0;
  }
  else{
    Emergency_Stop = 1;
  }
}

