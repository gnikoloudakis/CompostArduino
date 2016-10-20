void startFan(){
  relay.on(5);
  delay(500);
  relay.off(5);
  delay(1000);
}
void stopFan(){
  relay.on(6);
  delay(500);
  relay.off(6);
  delay(1000);
}

