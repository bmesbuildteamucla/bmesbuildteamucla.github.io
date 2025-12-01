<ul class="breadcrumb">
  <li><a href="{{ "/" | absolute_url }}">HOME</a></li>
  <li>WORKSHOP 2 - CODING AND ESP32</li>
</ul>

# Workshop 2 - Coding and ESP32

[Attendance Form](https://forms.gle/hoBcsWCQdFxDxCy48){:target="_blank"}

## Activities:

#### Activity 1 - LED Time
* Turn the LED on after 5 seconds using a conditional statement. (Note: Don’t use delay().)

#### Activity 2 - LED Flashing
* Have the yellow LED turned on, then every 5 seconds turn off the yellow LED and have the red LED flash 10 times. (Note: Use delay())

#### Activity 3 - Storing Potentiometer Values
* Store the past 5 values read from the potentiometer in an array, and print the array after every reading. To prevent output clutter, only read new values every 5 seconds (use delay())
* The potentiometer is a voltage divider, and turning the knob changes the resistances R1 and R2. This allows you to change the output voltage, which is the middle pin.
 	* The potentiometer has 3 pins: Power, Ground, and Signal.
    * ![image](https://i.pinimg.com/736x/fa/b5/e0/fab5e0b7a7aa6028ffb29febc00b55d6.jpg) <br>
 	* Connect the power/Vcc pin to **3v3**, the ground pin to ground, and the signal pin to an **analog pin.** Analog pins are labelled "ADC" in [this diagram](https://docs.google.com/presentation/d/1N-WQpIUewCvAAtX4nuYC8YP4cqgPpRetq4oDZ50vFZ8/edit?slide=id.g5d34e6069b_0_142#slide=id.g5d34e6069b_0_142){:target="_blank"}.
 	* Use the analogRead instead of digitalRead to capture the voltage differences
    * The array should be of ints, and should store the most recent value at index 0 at all times and the least recent value at index 4.
    * Challenge activity: Also print the maximum and minimum value of the array every time a value is added.

#### Activity 4 - LED Button
* LED lights up when the button is pressed and turns off when the button is not pressed
* Use the code to achieve this rather than the circuit
	- Wire the button and LED separately to the Arduino 
	- The button and LED should not be in the same circuit (separate power and ground)

#### Activity 5 - LED Switch
* Have the LED turn on if off when the button is clicked and turn off if on when the button is clicked (toggle on/off)
* Refer to Module 2 slides for the button circuit schematic

#### Activity 6 - LED Three Presses
* Have an LED toggle on/off after three clicks of a button

#### Activity 7 - LED Blinking
* Have two LEDs blink at different rates
* Have one LED blink at a randomly created rate, and the other blink half as fast
* Note that in order for the LEDs to blink independently of each other, you must use millis()

#### Activity 8 - Three LEDs
* You have one button and three separate LEDs
* When you hold the button, the first LED turns on
	- If you are still holding the button after one second, the second LED also turns on
	- If you are still holding the button after two seconds, the third LED also turns on
	- If at any point you release the button, only the LEDs that have been turned on stay on
* The next time you press the button, all the LEDs will turn off. Further button presses will continue the pattern.

	- *Hint: Don’t use delays [delay() will stall your code for the specified time]. Instead, think of a way to track time elapsed from the first button press using millis().*

#### Activity 9 - Morse Code (Optional Challenge)
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
 
## Solutions:
* [Activity 1 - LED Time](activity-1--LED-time)
* [Activity 2 - LED Flashing](activity-2--LED-flashing)
* [Activity 3 - Storing Potentiometer Values](activity-3--Storing-Potentiometer)
* [Activity 4 - LED Button](activity-4--LED-button)
* [Activity 5 - LED Switch](activity-5--LED-switch)
* [Activity 6 - LED Three Presses](activity-6--LED-three-presses)
* [Activity 7 - LED Blinking](activity-7--LED-blinking)
* [Activity 8 - Three LEDs](activity-8--three-LEDs)
* [Activity 9 - Morse Code](activity-9--morse-code) 



