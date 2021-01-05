# [Winter Break Problem Set](https://bmesbuildteamucla.github.io/winter-break/problem-set-2)
## Problem 4 - Newton’s Luminescent Cradle

### Task:
* You are a hot shot at a big time company because of all the experience you got from Build Team. You need some trinkets for your desk, but you want them to be unique. You really like the trinket called Newton’s Cradle, but being the hot shot you are, the physical device is trivial. You decide to make a Newton’s cradle made of LEDs instead.

* In its resting state an LED on the end of a line of 5 LEDs is illuminated. When a button is pressed and released, analogous to pulling back one of the balls on a normal Newton’s Cradle and releasing it, the “light” bounces to each LED and goes back and forth across the 5 LEDs. However, you want it to be very similar to a normal Newton’s Cradle and the bouncing stops at some point. Have the “bouncing” of light slow down and eventually stop on one of the LEDs on the end. You can assume that the button will only be pressed if the light is not “bouncing”.

  - *Hint: It will be much easier if you store your leds pins in an array.*

  - Optional challenge: If you have completed this problem, try to control the bouncing of lights using a sine function.

### Circuit:
![Circuit](https://bmesbuildteamucla.github.io/winter-break/problem-set-2/problem-4--newton's-cradle/circuit.png)

### Code:
```c
//Button and LED setup
int led[5] = {9, 10, 11, 12, 13};
int button[2] = {6, 7};
int now[2] = {0, 0};
int prev[2] = {0, 0};

//Variables used to control the Newton's Cradle
//oscillation of the LEDs
bool end = false;
int right = 0;
int rateInitial = 800;
int rate = rateInitial;
int previousLED = 0;
int currentLED = 0;

void setup()
{
  //Assign pins as inputs/outputs
  //Arrays make this step much easier
  for (int i = 0; i < 5; i++) {
    pinMode(led[i], OUTPUT);
    pinMode(button[i], INPUT);
  }
  
  //Initially, the right LED is on
  digitalWrite(led[0], HIGH);
  
}

void loop()
{
  
  //This for loop and the following if statement are used to
  //check if either button has been pressed. It's just an
  //extension of the previous/current code that we usually
  //use, except current is called "now" and we're using two
  //buttons.
  for (int i = 0; i < 2; i++) {
    now[i] = digitalRead(button[i]);
    if (now[i] != prev[i] && now[i] == 1 && i == right) {
      
      //This while loop collapses if the cradle has been
      //runnning for too long AND the oscillation stops at
      //one end of the cradle.
      while (rate < 2000 || end == true) {
        int time = millis();
        
        //Use the same modulo rate technique as Activity 6
        //in Workshop 2.
        if (time % rate == 0) {
          digitalWrite(led[currentLED], HIGH);
          digitalWrite(led[previousLED], LOW);
          
          //Updates the boolean end
          if (currentLED == 0 || currentLED == 4) {
            end = true;
          }
          else {
            end = false;
          }
          
          //Updates the previous LED before
          //updating the current LED
          previousLED = currentLED;
          
          //If the oscillation is coming from the right,
          //proceed to the left LED. Otherwise, proceed
          //to the right LED.
          if (right == 1) {
            currentLED = currentLED - 1;
          }
          else {
            currentLED = currentLED + 1;
          }
          
          //This method simply uses addition to increase
          //the value of rate, which in turn slows down
          //the oscillation.
          rate = rate + 10;
        }
      }
      
      //After the cradle stops oscillating, redefine the
      //initial rate again.
      rate = rateInitial;

    }
    
    //Don't forget this part for the button!
    prev[i] = now[i];
  }
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
    while (millis() - startTime < 10000)
    {
      int t = millis()- startTime;
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
