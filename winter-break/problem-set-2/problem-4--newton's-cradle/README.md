# [Winter Break Problem Set](https://bmesbuildteamucla.github.io/winter-break/problem-set-2)
## Problem 4 - Newton’s Luminescent Cradle

### Task:
* You are a hot shot at a big time company because of all the experience you got from Build Team. You need some trinkets for your desk, but you want them to be unique. You really like the trinket called Newton’s Cradle, but being the hot shot you are, the physical device is trivial. You decide to make a Newton’s cradle made of LEDs instead.

* In its resting state an LED on the end of a line of 5 LEDs is illuminated. When a button is pressed and released, analogous to pulling back one of the balls on a normal Newton’s Cradle and releasing it, the “light” bounces to each LED and goes back and forth across the 5 LEDs. However, you want it to be very similar to a normal Newton’s Cradle and the bouncing stops at some point. Have the “bouncing” of light slow down and eventually stop on one of the LEDs on the end. You can assume that the button will only be pressed if the light is not “bouncing”.

  - *Hint: It will be much easier if you store your leds pins in an array.*

  - Optional challenge: If you have completed this problem, try to control the bouncing of lights using a sine function.

### Circuit:
![WBPS Newton's Cradle Circuit](https://user-images.githubusercontent.com/54077199/148471153-3f2a5481-5146-468e-993f-0bee92b155a8.JPG)

### Code:
```c
int LED [5] = {7, 6, 5, 4, 3};             //define led pins in array
int button = 8;                            //define button pin
int current = 0;                           //introduce variable for current state of button
int previous = 0;                          //introduce variable for previous state of button
int time = 100;                            //time between led flashes

void setup()
{
  digitalWrite(LED[0], HIGH);              //first led starts on
  pinMode(button, INPUT);
  
  for (int i = 1; i < 5; i++)              //for loop turns all leds off except first one and designates as output
  {
    digitalWrite(LED[i], LOW);
    pinMode(LED[i], OUTPUT);
  }
}

void loop()
{
  current = digitalRead(button);           //current state of button
  if (current != previous)                 //if button state changes (i.e. when pressed)
  {
    while (time < 500)                     //while loop controls when the movement stops depending on how long the delay btwn flashes is
    {                                      //the value 500 ensures it will end on the first led (do calculations)
      for (int i=0; i<5; i++)              //turns leds on in the rightward direction
      {
        digitalWrite(LED[i], LOW);         //turn off led i (starts with first led)
        digitalWrite(LED[i+1], HIGH);      //turn on led to the right
        delay(time);                       //delay between led flashes
        time = time + 10;                  //increase delay between flashes so it slows down
      }
      for (int i=4; i>0; i--)              //turns leds on in the leftward direction
      {
        digitalWrite(LED[i], LOW);         //turn off led i (starts with last led)
        digitalWrite(LED[i-1], HIGH);      //turn on led to the left of i 
        delay(time);                       //delay between led flashes
      	time = time + 10;                  //increase delay between flashes so it slows down
      }
    }
    digitalWrite(LED[0], HIGH);            //cycle ends at the first led, so leave that one on once we leave the while loop
  }
  current = previous;                      //reset current state to LOW (previous is set as 0, or low)
}

```








### Optional Challenge:
```c
//Note that the following code uses different pins for the
//LEDs and buttons than is pictured above.

int switchPin = 13;
int startTime;
double sineTime;
int floorTime;
int prev;

void setup()
{
  for (int i = 1; i < 6; i++)
    pinMode(i, OUTPUT);
  pinMode(switchPin, INPUT);
  digitalWrite(1, HIGH);
}

void loop()
{
  if (digitalRead (switchPin) == HIGH)
  {
    while(digitalRead(switchPin) == HIGH)
    {
      // do nothing while button is still pressed so that code only runs once
    }
    startTime = millis();
    while (millis() - startTime < 9500)
    {
      float t = millis()- startTime;
      sineTime = 2.49 * sin(10000/(pow((t/3500)+10.05, 2))) + 3.5;
      floorTime = floor(sineTime);
      digitalWrite (floorTime, HIGH);
      if (floorTime!= prev)
      {
        digitalWrite (prev, LOW);
      }
      prev = floorTime;
    }
  }
}
```
