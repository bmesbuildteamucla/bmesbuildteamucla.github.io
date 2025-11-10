# [Workshop 2 - Coding and Arduino](https://bmesbuildteamucla.github.io/workshops/workshop-2--coding-and-arduino)

## Activity 8 - Three LEDs

### Task:
You have one button and three separate LEDs. When you hold the button, the first LED turns on. If you are still holding the button after one second, the second LED also turns on. If you are still holding the button after two seconds, the third LED also turns on. If at any point you release the button, only the LEDs that have been turned on stay on. The next time you press the button, all the LEDs will turn off. Further button presses will continue the pattern.

*Hint: Don’t use delays [delay() will stall your code for the specified time]. Instead, think of a way to track time elapsed from the first button press using millis().*

### Circuit:
![Circuit](circuit.png)

### Code:
```cpp
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
  if (digitalRead(buttonPin) == HIGH && !LEDState)      // if button is pressed and LEDs are off
  {
    startTime = millis();                               // set start time to when button is pressed
    while (digitalRead(buttonPin) == HIGH)              // runs while button is pressed, stops when button is released
    {
      digitalWrite(LEDPin1, HIGH);                      // turns first LED on
      if (millis() - startTime >= 1000)                 // turns on second LED if button has been held for more than 1 second
      {
        digitalWrite(LEDPin2, HIGH);
      }
      if (millis() - startTime >= 2000)                 // turns on second LED if button has been held for more than 2 seconds
      {
        digitalWrite(LEDPin3, HIGH);
      }
    }
    LEDState = !LEDState;                               // LEDs are now on, so LEDState switched to true
  }
  
  if (digitalRead(buttonPin) == HIGH && LEDState)       // if button is pressed and LEDs are on
  {
    digitalWrite(LEDPin1, LOW);
    digitalWrite(LEDPin2, LOW);                         // turn all LEDs off
    digitalWrite(LEDPin3, LOW);
    LEDState = !LEDState;                               // LEDs are now off, so LEDState switched to false
    while (digitalRead(buttonPin) == HIGH)
    {
      // do nothing while button is still pressed so that code only runs once
    }
  }
}
```
