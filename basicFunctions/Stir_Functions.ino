void stirForwardOn(){
  relay.on(1);
  delay(500);
  relay.off(1);
  delay(1000);
}
void stirForwardOff(){
  relay.on(2);
  delay(500);
  relay.off(2);
  delay(1000);
}

void stirBackwardOn(){
  relay.on(3);
  delay(500);
  relay.off(3);
  delay(1000);
}
void stirBackwardOff(){
  relay.on(4);
  delay(500);
  relay.off(4);
  delay(1000);
}
void stirRightOn(){
  relay.on(7);
  delay(500);
  relay.off(7);
  delay(1000);
}
void stirRightOff(){
  relay2.on(8);
  delay(500);
  relay2.off(8);
  delay(1000);
}
void stirLeftOn(){
  relay2.on(1);
  delay(500);
  relay2.off(1);
  delay(1000);
}
void stirLeftOff(){
  relay2.on(2);
  delay(500);
  relay2.off(2);
  delay(1000);
}
