<ul class="breadcrumb">
  <li><a href="{{ "/" | absolute_url }}">HOME</a></li>
  <li>WORKSHOP 2 - CODING AND ARDUINO</li>
</ul>

# Workshop 2 - Coding and Arduino

## Activities:

#### Activity 1 - LED Time
* Turn the LED on after 5 seconds using a conditional statement. (Note: Don’t use delay().)

#### Activity 2 - LED Flashing
* Have the yellow LED turned on, then every 5 seconds turn off the yellow LED and have the red LED flash 10 times. (Note: Use delay())

#### Activity 3 - LED Button
* LED lights up when the button is pressed and turns off when the button is not pressed
* Use the code to achieve this rather than the circuit
	- Wire the button and LED separately to the Arduino 
	- The button and LED should not be in the same circuit (separate power and ground)

#### Activity 4 - LED Switch
* Have the LED turn on if off when the button is clicked and turn off if on when the button is clicked (toggle on/off)
* Refer to Module 2 slides for the button circuit schematic

#### Activity 5 - LED Three Presses
* Have an LED toggle on/off after three clicks of a button

#### Activity 6 - LED Blinking
* Have two LEDs blink at different rates
* Have one LED blink at a randomly created rate, and the other blink half as fast
* Note that in order for the LEDs to blink independently of each other, you must use millis()

#### Activity 7 - Three LEDs
* You have one button and three separate LEDs
* When you hold the button, the first LED turns on
	- If you are still holding the button after one second, the second LED also turns on
	- If you are still holding the button after two seconds, the third LED also turns on
	- If at any point you release the button, only the LEDs that have been turned on stay on
* The next time you press the button, all the LEDs will turn off. Further button presses will continue the pattern.

	- *Hint: Don’t use delays [delay() will stall your code for the specified time]. Instead, think of a way to track time elapsed from the first button press using millis().*

#### Activity 8 - Morse Code (Optional Challenge)
* Write a program that lets you to input a word or sentence into the serial monitor and translate it to Morse code. Have an LED flash the Morse code.

	- *Hint: Read in inputted string and cycle through it using loops*
	- *Optional: Print out Morse code in Serial Monitor and produce Morse code sound using piezo buzzer*
	- Morse code array:
	```c++
	String morse[26] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..",     // A-I
			                ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.",   // J-R 
			                "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};         // S-Z
	```
	- Serial read functions:
	```c++
	if (Serial.available() > 0) // send data only when you receive data
	Serial.read() // reads incoming serial data
	Serial.readString() // reads characters from the serial buffer into a String
	```
 
<!--
## Solutions:
* [Activity 1 - LED Time](https://bmesbuildteamucla.github.io/workshops/workshop-2--coding-and-arduino/activity-1--LED-time)
* [Activity 2 - LED Flashing](https://bmesbuildteamucla.github.io/workshops/workshop-2--coding-and-arduino/activity-2--LED-flashing)
* [Activity 3 - LED Button](https://bmesbuildteamucla.github.io/workshops/workshop-2--coding-and-arduino/activity-3--LED-button)
* [Activity 4 - LED Switch](https://bmesbuildteamucla.github.io/workshops/workshop-2--coding-and-arduino/activity-4--LED-switch)
* [Activity 5 - LED Three Presses](https://bmesbuildteamucla.github.io/workshops/workshop-2--coding-and-arduino/activity-5--LED-three-presses)
* [Activity 6 - LED Blinking](https://bmesbuildteamucla.github.io/workshops/workshop-2--coding-and-arduino/activity-6--LED-blinking)
* [Activity 7 - Three LEDs](https://bmesbuildteamucla.github.io/workshops/workshop-2--coding-and-arduino/activity-7--three-LEDs)
* [Activity 8 - Morse Code](https://bmesbuildteamucla.github.io/workshops/workshop-2--coding-and-arduino/activity-8--morse-code) 
-->


