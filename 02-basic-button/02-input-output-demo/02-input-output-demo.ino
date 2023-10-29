const int buttonPin = 2;
const int ledPin = 4;

byte buttonState = 0;
byte pressedState = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(buttonPin, INPUT_PULLUP); 
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  buttonState = !digitalRead(buttonPin);
  if(buttonState == 1) {
    if(pressedState == 1) {
      pressedState = 0;
    }
    else {
      pressedState = 1;
    }
  }
  digitalWrite(ledPin, pressedState);
  Serial.println(pressedState);
}