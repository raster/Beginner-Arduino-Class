/*
 * BAC_07_Map.ino
 *
 * This sketch reads a potentiometer and prints an adjusted value
 * 
 * https://www.arduino.cc/en/Reference/Map
 *
 * map(value, fromLow, fromHigh, toLow, toHigh)
 * 
 * Pete Prodoehl <pete@2xlnetworks.com>
 */

int POTpin = 0;
int POTvalue;
int NEWvalue;

void setup() {
  // nothing
  Serial.begin(9600);
}

void loop() {

  POTvalue = analogRead(POTpin);

  NEWvalue = map(POTvalue, 0, 1023, 1, 10);  

  Serial.print("Mapped Value: ");
  Serial.println(NEWvalue);

}

