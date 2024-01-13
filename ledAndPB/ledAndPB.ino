const int led[4] = {2, 3, 4, 5};
const int pb = 6;
int click = 0;

void setup() {
  // put your setup code here, to run once:
  for(int i = 0; i < 4; i++){
    pinMode(led[i], OUTPUT);
  }
  pinMode(pb, INPUT);
  Serial.begin(9600);
}

void loop() {
  // Serial.println(digitalRead(pb));
  if (digitalRead(pb) == 1 && click == 0){
    digitalWrite(led[0], HIGH);
    delay(500);
    click++;
  } else if (digitalRead(pb) == 1 && click == 1){
    digitalWrite(led[1], HIGH);
    delay(500);
    click++;
  } else if (digitalRead(pb) == 1 && click == 2){
    digitalWrite(led[2], HIGH);
    delay(500);
    click++;
  } else if (digitalRead(pb) == 1 && click == 3){
    digitalWrite(led[3], HIGH);
    delay(500);
    click++;
  } else if (click == 4){
    click = 0;
  } else {
    for(int i = 0; i < 4; i++){
      digitalWrite(led[i], LOW);
    }
  }
}
