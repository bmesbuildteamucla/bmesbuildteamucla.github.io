# [Workshop 3 - Arduino Analog](https://bmesbuildteamucla.github.io/workshops/workshop-3--arduino-analog)

## Activity 2 - Servo Motors

### Task:
* Program the Servo to sweep back and forth automatically
* Use a potentiometer or joystick to it to control the servo manually
* Initializing Servo (above setup)
  ```c++
  #include <Servo.h>
  Servo myservo;
  ```
* Relevant functions
  ```c++
  myservo.attach(pin)
  myservo.write(angle)
  ```
* Revelant Components
  - Servo:
  ![servo](https://github.com/bmesbuildteamucla/bmesbuildteamucla.github.io/assets/134753006/26b289cf-f71f-4741-aeb1-097a82c9a46c)
  - Joystick:<br>
  ![joystick](https://github.com/bmesbuildteamucla/bmesbuildteamucla.github.io/assets/134753006/4e8bd64d-5d6d-433a-b8ff-780cd6b8e361)
  <br>Practice searching online for how to wire and code a Joystick, then try to incorporate it into your code to achieve the same function.
  Some useful links: https://www.instructables.com/Connect-and-Use-Joystick-With-Arduino/, https://lastminuteengineers.com/joystick-interfacing-arduino-processing/

### Circuit: 
![Circuit](https://bmesbuildteamucla.github.io/workshops/workshop-3--arduino-analog/activity-2--servo-motor/W3A2_Circuit.JPG)

### Code to Automatically Sweep Servo:
```c++
#include<Servo.h>
Servo Right;
bool current = false;
int rotation = 0;
void setup() {
  Right.attach(A5);
  Serial.begin(9600);
}

void loop()
{
   for (int i = 0; i <= 180 ; i++)
   {
      if (rotation%2==0)
        {Right.write(i);}
      else
        {Right.write(180-i);}
      delay(10);
   }
   rotation++;
}
```

### Code to Manually Control Servo with Joystick:
```c++
#include<Servo.h>
Servo Right;
int joyY = A0; // analog pin used to connect the Y - axis of Joystick
int y; // variables to read the values from the analog pins

void setup() {
  Right.attach(A5);
  Serial.begin(9600);
}

void loop() {
  y = joyY;    // reads the value of the Joystick's Y - axis (value between 0 and 1023)
  y = map(analogRead(joyY),0,1023, 0, 180);
  Right.write(y);
  delay(15);
}
```
