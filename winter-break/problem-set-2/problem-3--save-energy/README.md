# [Winter Break Problem Set](https://bmesbuildteamucla.github.io/winter-break/problem-set-2)
## Problem 3 - Save Energy…Save the World

### Task:
* As New Year’s Day quickly approaches, you decide to be more aware of your energy usage. The first area you focus on is your light usage. You want to know how long an LED has been on. If it has been on for longer than 20 seconds, it will automatically turn off.

* Implement this system using a light switch button and LED. When you press the button once, the LED turns on. The LED will either turn off when the button is pressed again or turn off automatically after 20 seconds. When the LED turns off, you want to print the following message to the Serial Monitor: `“The LED was on for [number of seconds LED was on] seconds.”`

### Circuit:
![Circuit](https://bmesbuildteamucla.github.io/winter-break/problem-set-2/problem-3--save-energy/circuit.png)

### Code:
```c
int LED = 13;
int button = 7;
int current = 0;                               //current state of the button
int previous = 0;                              //previous state of the button
int startOn = 0;                               //time when led is turned on
double duration = 0;                           //time since led was turned on, use a double so it can show decimals!
bool on = false;                               //led tracker, false means led off 

void setup()
{
  digitalWrite(LED, LOW);
  pinMode(LED, OUTPUT);
  pinMode(button, INPUT);
  Serial.begin(9600);                          //must use serial begin to use the serial monitor later
}

void loop()
{
  current = digitalRead(button);               //current and previous account for errors from holding the button
  if (current != previous)
  {
    while (digitalRead(button) == HIGH)
    {
      // do nothing while button is still pressed so that code only runs once
    }
    if (current == HIGH && on == false)        //if button is pressed and led is off
    {
      digitalWrite(LED, HIGH);                 //turn on led
      on = true;  			                       //change boolean to true since led is on
      startOn = millis();	                     //mark the current time as start of led on
    }
    else if (current == HIGH && on == true)    //if button is pressed and led is on
    {
      digitalWrite(LED, LOW);                  //turn off led
      on = false;			                         //change boolean to false
      duration = (millis() - startOn);         //define duration as current time minus start on
      Serial.println("The LED was on for ");   //print to serial monitor
      Serial.println(duration/1000);           //divide duration by 1000 to get time in seconds
      Serial.println(" seconds.");
    }
  }
  previous = current;		                       //define the new previous to be the old current
  if (millis()-startOn > 20000 && on == true)  //if the led is on for more than 20 sec
  {
    digitalWrite(LED, LOW);                    //repeat the steps from else if statement
    on = false;
    duration = (millis() - startOn);
    Serial.println("The LED was on for ");
    Serial.println(duration/1000);
    Serial.println("seconds.");
  }
}
```
