/*
 * BAC_09_LED.ino
 *
 * This sketch makes an LED fade
 *
 * https://www.arduino.cc/en/Reference/For
 * 
 * https://www.arduino.cc/en/Tutorial/PWM
 * 
 * Pete Prodoehl <pete@2xlnetworks.com>
 */
 
// we use a PWM pin (they have a ~ by the number)
int LEDpin = 11;

void setup() {
  pinMode(LEDpin, OUTPUT);
}

void loop() {

  for (int i = 0; i < 255; i++) {
    analogWrite(LEDpin, i);
    delay(5);
  }

  for (int i = 255; i > 0; i--) {
    analogWrite(LEDpin, i);
    delay(5);
  }

}

