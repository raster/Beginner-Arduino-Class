/*
 * BAC_16_MOSFET.ino
 *
 * This sketch makes a 12 volt device run via PWM
 *
 * https://www.sparkfun.com/products/12959
 * 
 * https://www.arduino.cc/en/Reference/For
 * 
 * https://www.arduino.cc/en/Tutorial/PWM
 * 
 * Pete Prodoehl <pete@2xlnetworks.com>
 */

// we use a PWM pin (they have a ~ by the number)
int PWRpin = 3;

void setup() {
  pinMode(PWRpin, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  for (int i = 0; i < 255; i++) {
    analogWrite(PWRpin, i);
    Serial.print("value: ");
    Serial.println(i);
    delay(25);
  }

  for (int i = 255; i > 0; i--) {
    analogWrite(PWRpin, i);
    Serial.print("value: ");
    Serial.println(i);
    delay(25);
  }

}


