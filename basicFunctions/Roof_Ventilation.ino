void startVent(){
  relay2.on(1);
  delay(500);
  relay2.off(1);
  delay(1000);
}
void stopVent(){
  relay2.on(2);
  delay(500);
  relay2.off(2);
  delay(1000);
}
