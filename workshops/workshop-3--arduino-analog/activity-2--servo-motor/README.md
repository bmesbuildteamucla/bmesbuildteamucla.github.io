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

### Circuit: 
![Circuit](https://bmesbuildteamucla.github.io/workshops/workshop-3--arduino-analog/activity-2--servo-motor/W3A2_Circuit.JPG)

### Code:
```c++
#include<Servo.h>
Servo Right;
int joyY = A0; // analog pin used to connect the Y - axis of Joystick
int y; // variables to read the values from the analog pins

void setup() {
  // put your setup code here, to run once:
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
