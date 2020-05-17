/*
 * BAC_06_Potentiometer.ino
 *
 * This sketch reads a potentiometer and prints the value
 *
 * https://www.arduino.cc/en/Tutorial/AnalogInput
 * 
 * https://www.arduino.cc/en/Tutorial/Potentiometer
  * 
  * Pete Prodoehl <pete@2xlnetworks.com>
  */

int POTpin = 0;
int POTvalue;

void setup() {
  // nothing
  Serial.begin(9600);
}

void loop() {

  POTvalue = analogRead(POTpin);

  Serial.print("Potentiometer Value: ");
  Serial.println(POTvalue);

}


