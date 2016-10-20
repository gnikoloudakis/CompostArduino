void startFan(){
  relay2.on(3);
  delay(500);
  relay2.off(3);
  delay(1000);
}
void stopFan(){
  relay2.on(4);
  delay(500);
  relay2.off(4);
  delay(1000);
}

