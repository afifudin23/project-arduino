#define buzzer 2
#define red 4
#define yellow 5
#define green 6

void setup() {
  Serial.begin(9600);
  pinMode(A5, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  // pinMode(LED_BUILTIN, OUTPUT);

}
void soundAlert (int speed, int freq){
  tone(buzzer, freq);
  delay(speed);
  noTone(buzzer);
}
void ledBlink (int led, int speed){
  digitalWrite(led, HIGH);
  delay(speed);
  digitalWrite(led, LOW);
}
void loop() {
  int sensor = analogRead(A5);
  Serial.println(sensor);
  delay(1000);
  if (sensor < 300){
    ledBlink(red, 1000);
    soundAlert(100, 100);
    delay(1000);
  } else if (300 <= sensor && sensor <= 500){
    ledBlink(yellow, 1000);
    soundAlert(100, 1000);
    delay(1000);
  } else {
    ledBlink(green, 1000);
    soundAlert(100, 10000);
    delay(1000);
  }
}
