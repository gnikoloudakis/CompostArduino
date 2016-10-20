//
void  netSetup() {
byte mac[] = { 
  0x00, 0xAA, 0xBB, 0xCC, 0xDE, 0x02 };
IPAddress ip(192,168,1, 188);
IPAddress gateway(192,168,1, 1);
IPAddress subnet(255, 255, 255, 0);
//
//  // start the Ethernet connection:
  Serial.println("Trying to get an IP address using DHCP");
  if (Ethernet.begin(mac) == 0) {
    Serial.println("Failed to configure Ethernet using DHCP");
//    // initialize the ethernet device not using DHCP:
    Ethernet.begin(mac, ip, gateway, subnet);
    
  }
//  // print your local IP address:
  Serial.print(F("My IP address: "));
  ip = Ethernet.localIP();
  for (byte thisByte = 0; thisByte < 4; thisByte++) {
//    // print the value of each byte of the IP address:
    Serial.print(ip[thisByte], DEC);
    Serial.print("."); 
  }
  Serial.println();
//
}


