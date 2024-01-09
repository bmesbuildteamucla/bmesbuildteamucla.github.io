# Workshop 3 - Arduino Analog

## Activities:
### *** *Note: Remember which pins we use for analog INPUT vs analog OUTPUT* ***

#### Activity 1 - Piezo Buzzer
* Make a theremin (musical instrument) using a photoresistor and piezo buzzer
  - Alternatively, use a potentiometer to control pitch
* Play a scale 
* Relevant functions
  ```c++
  tone(pin, frequency);             //assigns a tone to the specified pin
  tone(pin, frequency, duration);   //assigns a tone to the specified pin for specified duration
  delay(milliseconds)               //can create a pause between notes
  noTone(pin)                       //turns off the tone
  //IMPORTANT NOTE: if you use tone(pin, frequency, duration) and then delay(ms), the delay must be equal to
  //the duration of the tone PLUS the amount of pause you want after it
  ```
* Revelant components
  - Piezo Buzzer: 
  ![buzzer circuit](https://github.com/bmesbuildteamucla/bmesbuildteamucla.github.io/assets/134753006/f0c98d85-631b-4d5e-b60b-ee61a7043293)
  - Photoresistor: Can be wired in both directions, since it isn't a diode.
  ![photoresistor](https://github.com/bmesbuildteamucla/bmesbuildteamucla.github.io/assets/134753006/6eccc47e-69a0-449b-bf55-7219ab8dbeb7)
  - Potentiometer: Can also be wired in both directions either place power at the left or right most pin.
  ![potentiometerpng](https://github.com/bmesbuildteamucla/bmesbuildteamucla.github.io/assets/134753006/5065d173-fe3b-4ade-91c0-bdea99501fa8)

#### Activity 2 - Servo Motors
* Program the Servo to sweep back and forth automatically
* Then use a potentiometer or joystick to control the servo manually
* Initializing Servo (above void setup)
  ```c++
  #include <Servo.h>    //allows you to use the servo library
  Servo myservo;        //names your servo and assigns it as a servo
  ```
* Relevant functions
  ```c++
  //(replace "myservo" with your chosen name)
  myservo.attach(pin)   //assigns the servo pin (place in void setup)
  myservo.write(angle)  //tells your servo to move to a specified angle 
  ```
* Revelant Components
  - Servo:
  ![servo](https://github.com/bmesbuildteamucla/bmesbuildteamucla.github.io/assets/134753006/26b289cf-f71f-4741-aeb1-097a82c9a46c)
  - Joystick:<br>
  ![joystick](https://github.com/bmesbuildteamucla/bmesbuildteamucla.github.io/assets/134753006/4e8bd64d-5d6d-433a-b8ff-780cd6b8e361)
  <br>Practice searching online for how to wire and code a Joystick, then try to incorporate it into your code to achieve the same function.
  Some useful links: https://www.instructables.com/Connect-and-Use-Joystick-With-Arduino/, https://lastminuteengineers.com/joystick-interfacing-arduino-processing/

#### Activity 3 - Light-Level sensor
* Use a photoresistor to measure brightness
  - Pinch and release the thermistor to see light level changes
  - Graph using Serial Plotter
  - Alternatively, use thermistor to measure temperature by pinching & releasing the thermistor to see tempearture changes
* Relevant Components
  - Thermistor: Can be connected in both directions, as it does not have polarity.
  ![Thermistor](https://github.com/bmesbuildteamucla/bmesbuildteamucla.github.io/assets/134753006/ebd35de3-7983-4192-82f5-14428ca65ac4)
  Learn more about the thermistor, how it works, and how to code it at https://www.circuitbasics.com/arduino-thermistor-temperature-sensor-tutorial/


#### Activity 4 - Night Light
* Make a night light using a photoresistor and an LED (The LED turns on when the room is dark) 


#### Challenge Activity - Reaction Time Test (Optional)
* Use an LED and a piezo buzzer to make a fun game! Have the LED or piezo buzzer turn on randomly so that the user has to press the button as fast as possible to turn it off. Have the reaction speed be printed in the serial monitor each time. See who has the fastest reaction times :)


#### Challenge Activity - Dino Run (Optional)
* Use the servo and photoresistor to play the Google dino game automatically up to 300 points. (Bonus: Try to get the highest score possible.)



<!--
## Solutions:
* [Activity 1 - Piezo Buzzer](https://bmesbuildteamucla.github.io/workshops/workshop-3--arduino-analog/activity-1--piezo-buzzer)
* [Activity 2 - Servo motors + Joystick](https://bmesbuildteamucla.github.io/workshops/workshop-3--arduino-analog/activity-2--servo-motor)
* [Activity 3 - Light Level Sensor](https://bmesbuildteamucla.github.io/workshops/workshop-3--arduino-analog/activity-3--light-level-sensor)
* [Activity 4 -  Night Light](https://bmesbuildteamucla.github.io/workshops/workshop-3--arduino-analog/activity-4--night-light)


hide solutions
* [Challenge Activity - Reaction Time Test](https://bmesbuildteamucla.github.io/workshops/workshop-3--arduino-analog/challenge-activity-2--reaction-time-test)
* [Challenge Activity - Dino Run](https://bmesbuildteamucla.github.io/workshops/workshop-3--arduino-analog/challenge-activity-1--dino-run)
-->
