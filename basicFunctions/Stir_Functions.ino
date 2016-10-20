void stirForwardOn(){
  relay.on(1);
  delay(500);
  relay.off(1);
  delay(1000);
  Motor_F = 1;
}
void stirForwardOff(){
  relay.on(2);
  delay(500);
  relay.off(2);
  delay(1000);
  Motor_F = 0;
}

void stirBackwardOn(){
  relay.on(3);
  delay(500);
  relay.off(3);
  delay(1000);
  Motor_B = 1;
}
void stirBackwardOff(){
  relay.on(4);
  delay(500);
  relay.off(4);
  delay(1000);
  Motor_B = 0;
}
void stirRightOn(){
  relay.on(5);
  delay(500);
  relay.off(5);
  delay(1000);
  Motor_R = 1;
}
void stirRightOff(){
  relay.on(6);
  delay(500);
  relay.off(6);
  delay(1000);
  Motor_R = 0;
}
void stirLeftOn(){
  relay.on(7);
  delay(500);
  relay.off(7);
  delay(1000);
  Motor_L = 1;
}
void stirLeftOff(){
  relay.on(8);
  delay(500);
  relay.off(8);
  delay(1000);
  Motor_L = 0;
}
