/*
 * BAC_13_Relay.ino
 *
 * This sketch makes a relay turn on and off
 * 
 * Pete Prodoehl <pete@2xlnetworks.com>
 */

int RelayPin = 13;

void setup() {
  pinMode(RelayPin, OUTPUT);
  digitalWrite(RelayPin, HIGH); // HIGH is off
}

void loop() {
  digitalWrite(RelayPin, LOW); // LOW is on
  delay(1000);
  digitalWrite(RelayPin, HIGH); // HIGH is off
  delay(1000);
}


