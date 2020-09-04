# Workshop 3 - Arduino Analog

## Activities:

#### Activity 1 - Piezo Buzzer
* Make a theremin (musical instrument) using a photoresistor and piezo buzzer
  - Alternatively, use a potentiometer to control pitch
* Play a scale
* Relevant functions
  ```c++
  tone(pin, frequency);
  tone(pin, frequency, duration);
  noTone(pin);
  ```


#### Activity 2 - Servo Motors
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


#### Activity 3 - Thermometer
* Use a thermistor to measure temperature
  - Pinch and release the thermistor to see temperature changes
  - Graph using Serial Plotter


#### Activity 4 - Night Light
* Make a night light using a photoresistor and an LED (The LED turns on when the room is dark) 


#### Challenge Activity - Reaction Time Test
* Use an LED and a piezo buzzer to make a fun game! Have the LED or piezo buzzer turn on randomly so that the user has to press the button as fast as possible to turn it off. Have the reaction speed be printed in the serial monitor each time. See who has the fastest reaction times :)


#### Challenge Activity - Dino Run
* Use the servo and photoresistor to play the Google dino game automatically up to 300 points. (Bonus: Try to get the highest score possible.)


## Solutions:
* [Activity 1 - Piezo Buzzer](https://bmesbuildteamucla.github.io/workshops/workshop-3--arduino-analog/activity-1--piezo-buzzer)
* [Activity 2 - Servo motors + Joystick](https://bmesbuildteamucla.github.io/workshops/workshop-3--arduino-analog/activity-2--servo-motor)
* [Activity 3 - Light Level Sensor](https://bmesbuildteamucla.github.io/workshops/workshop-3--arduino-analog/activity-3--light-level-sensor)
* [Activity 4 -  Night Light](https://bmesbuildteamucla.github.io/workshops/workshop-3--arduino-analog/activity-4--night-light)
* [Challenge Activity - Reaction Time Test](https://bmesbuildteamucla.github.io/workshops/workshop-3--arduino-analog/challenge-activity-1--dino-run)
* [Challenge Activity - Dino Run](https://bmesbuildteamucla.github.io/workshops/workshop-3--arduino-analog/challenge-activity-2--reaction-time-test)
