/*
 * BAC_11_Piezo.ino
 *
 * This sketch makes noise with a piezo
 *
 * https://www.arduino.cc/en/Reference/Tone
 * 
 * https://www.arduino.cc/en/Tutorial/ToneMelody
 * 
 * https://www.arduino.cc/en/Reference/Random
 * 
 * https://www.arduino.cc/en/Reference/RandomSeed
 * 
 * Pete Prodoehl <pete@2xlnetworks.com>
 */

int PiezoPin = 9;
int aSecond = 1000;

void setup() {
  randomSeed(analogRead(0));
  pinMode(PiezoPin, OUTPUT);
  tone(PiezoPin, 500);
  delay(aSecond * 2);
  noTone(PiezoPin);
  delay(aSecond * 2);
}

void loop() {

  int randyNum = random(50, 1000);
  tone(PiezoPin, randyNum);
  delay(aSecond / 2);

}

