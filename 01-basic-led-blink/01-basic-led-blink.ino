/***
 * @author Randolf Arevalo
 * @date 2021.11.14
 * @version 1.0
 * @description basic led blink (sequential blink pattern)
 */

//configure the leds here
const byte led1 = 8;
const byte led2 = 12;
const byte led3 = 10;
const byte leds[3] = {led1, led2, led3}; 

void setup() {
  for(byte led = 0; led < sizeof(leds); led++) {
    pinMode(leds[led], OUTPUT);
  }
}

void loop() {
  int interval=500;
  static byte activeLed = 0;
  static byte ledCount = sizeof(leds);
  
  for(byte led = 0; led < ledCount; led++) {
    digitalWrite(leds[led], (led == activeLed ? true:false));    
  }
  activeLed = (activeLed == (ledCount-1) ? 0: activeLed+1);
  delay(interval);  
}
