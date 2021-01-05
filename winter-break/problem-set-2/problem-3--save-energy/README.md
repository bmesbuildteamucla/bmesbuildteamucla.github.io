# [Winter Break Problem Set](https://bmesbuildteamucla.github.io/winter-break/problem-set-2)
## Problem 3 - Save Energy…Save the World

### Task:
* As New Year’s Day quickly approaches, you decide to be more aware of your energy usage. The first area you focus on is your light usage. You want to know how long an LED has been on. If it has been on for longer than 20 seconds, it will automatically turn off.

* Implement this system using a light switch button and LED. When you press the button once, the LED turns on. The LED will either turn off when the button is pressed again or turn off automatically after 20 seconds. When the LED turns off, you want to print the following message to the Serial Monitor: `“The LED was on for [number of seconds LED was on] seconds.”`

### Circuit:
![Circuit](https://bmesbuildteamucla.github.io/winter-break/problem-set-2/problem-3--save-energy/circuit.png)

### Code:
```c
int LEDPin = 13;
int switchPin = 7;
unsigned long startTime = 0;
unsigned long elapsedTime = 0;
bool run = true;

void setup()
{
  pinMode(LEDPin, OUTPUT);
  pinMode(switchPin, INPUT);
  Serial.begin (9600);
}

void loop()
{
  if (digitalRead(switchPin) == HIGH)
  {
    while (digitalRead(switchPin) == HIGH)
    {
      // do nothing while button is still pressed so that code only runs once
    }
    digitalWrite(LEDPin, HIGH);
    startTime = millis();                       // set startTime to time when button is pressed
    while (intervalTime < 20000)
    {
      elapsedTime = millis() - startTime;       // how long the light has been on
      if (digitalRead(switchPin) == HIGH)       // if button is pressed again, light turns off
      {
        digitalWrite(LEDPin, LOW);
        Serial.print("The LED was on for ");
        Serial.print(intervalTime/1000.);
        Serial.println(" seconds.");
        run = false;                            // do not run next if statement
        break;                                  // exit while loop
      }
    }
    if (run == true)                            // if light is on for 20 seconds
    {
      digitalWrite(LEDPin, LOW);
      Serial.println("The LED was on for 20 seconds.");
    }
    run = true;                                 // reset run to true for next cycle
    elapsedTime = 0;                            // reset elapsedTime to 0
    while (digitalRead(switchPin) == HIGH)
    {
      // do nothing while button is still pressed so that code only runs once
    }
  }
}
```
