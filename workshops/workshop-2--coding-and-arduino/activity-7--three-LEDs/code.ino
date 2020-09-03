int LEDPin1 = 13; // yellow LED
int LEDPin2 = 12; // white LED
int LEDPin3 = 11; // blue LED
int buttonPin = 2;
int startTime;
bool LEDState = false; // LEDs are off in the beginning

void setup()
{
  pinMode(LEDPin1, OUTPUT);
  pinMode(LEDPin2, OUTPUT);
  pinMode(LEDPin3, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop()
{
  if (digitalRead(buttonPin) == HIGH && !LEDState)           // if button is pressed and LEDs are off
  {
    startTime = millis();                                    // set start time to when button is pressed
    while (digitalRead(buttonPin) == HIGH)                   // runs while button is pressed, stops when button is released
    {
      digitalWrite(LEDPin1, HIGH);                           // turns first LED on
      if (millis() - startTime >= 1000)                      // turns on second LED if button has been held for more than 1 second
      {
        digitalWrite(LEDPin2, HIGH);
      }
      if (millis() - startTime >= 2000)                      // turns on second LED if button has been held for more than 2 seconds
      {
        digitalWrite(LEDPin3, HIGH);
      }
    }
    LEDState = !LEDState;                                    // LEDs are now on, so LEDState switched to true
  }
  
  if (digitalRead(buttonPin) == HIGH && LEDState)            // if button is pressed and LEDs are on
  {
    digitalWrite(LEDPin1, LOW);
    digitalWrite(LEDPin2, LOW);                              // turn all LEDs off
    digitalWrite(LEDPin3, LOW);
    LEDState = !LEDState;                                    // LEDs are now off, so LEDState switched to false
    while (digitalRead(buttonPin) == HIGH)
    {
      // do nothing while button is still pressed so that code only runs once
    }
  }
}
