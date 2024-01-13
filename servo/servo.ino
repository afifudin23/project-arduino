#include <Servo.h>
int pot;

Servo servo;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  servo.attach(5);
}

void loop() {
  // put your main code here, to run repeatedly:
  // pot = analogRead(1);
  // pot = map(pot, 0, 1023, 0, 180);
  // Serial.println(pot);
  // servo.write(180);
  // delay(1000);

}
