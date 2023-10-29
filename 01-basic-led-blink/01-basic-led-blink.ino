const byte ledCount = 3; //starts with zero!
const byte ledPins[ledCount] = { 2, 4, 6};

void setup()
{
  Serial.begin(9600);
  for(byte index; index <= (ledCount-1); index++)
  {
    pinMode(ledPins[index], OUTPUT);
  }
}

void loop()
{ 
  static byte activeIndex = 0;
  Serial.println((String)"active index:" + activeIndex);
  for(byte index = 0; index <= (ledCount-1); index++)
  {
    digitalWrite(ledPins[activeIndex], (activeIndex == index ? true: false));
    delay(1000); //this is important, or you'll not see the led blink!!
 }
  activeIndex = (activeIndex < (ledCount-1) ? activeIndex+1:0); 
}