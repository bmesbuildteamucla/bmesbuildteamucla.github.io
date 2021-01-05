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
unsigned long intervalTime = 0;
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
    startTime = millis();
    while (intervalTime < 20000)
    {
      intervalTime = millis() - startTime;
      if (digitalRead(switchPin) == HIGH)
      {
        digitalWrite(LEDPin, LOW);
        Serial.print("The LED was on for ");
        Serial.print(intervalTime/1000.);
        Serial.println(" seconds.");
        run = false;
        break;
      }
    }
    if (run == true)
    {
      digitalWrite(LEDPin, LOW);
      Serial.println("The LED was on for 20 seconds.");
    }
    run = true;
    intervalTime = 0;
    while (digitalRead(switchPin) == HIGH)
    {
      // do nothing while button is still pressed so that code only runs once
    }
  }
}
```
