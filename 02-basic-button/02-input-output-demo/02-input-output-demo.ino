const byte button = 2;
const byte led = 3;
byte buttonState = 0;

void setup() {
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  buttonState = digitalRead(button);
  digitalWrite(led, buttonState);
}
