#define buzzer 2

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(A5, INPUT);
  pinMode(buzzer, OUTPUT);
}
void ledBlink (int speed){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(speed);
  digitalWrite(LED_BUILTIN, LOW);
}
void soundAlert (int speed, int freq){
  tone(buzzer, freq);
  delay(speed);
  noTone(buzzer);
}
void loop() {
  int sensor = analogRead(A5);
  if (sensor < 100){
    ledBlink(500);
    soundAlert(100, 50);
  }
}
