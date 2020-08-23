# Workshop 2 - Coding and Arduino

## Activities:

#### Activity 1 - LED Time
* Turn the LED on after 5 seconds using a conditional statement. (Note: Don’t use delay(). Make a variable: int time)

#### Activity 2 - LED Flashing
* Have the yellow LED turned on, then every 5 seconds turn off the yellow LED and have the red LED flash 10 times.

#### Activity 3 - LED Button
* Have the LED light up when the button is pressed down and turn off when not.

#### Activity 4 - LED Switch
* Have the LED turn on if off when the button is clicked and turn off if on when the button is clicked (toggle on/off).

#### Activity 5 - LED Three Presses
* Have an LED toggle on/off after three clicks of a button.

#### Activity 6 - LED Blinking
* Have two LEDs blink at different rates.
* Have one LED blink at a randomly created rate, and the other blink half as fast

#### Activity 7 - Three LEDs
* You have one button and three separate LEDs. When you hold the button, the first LED turns on. If you are still holding the button after one second, the second LED also turns on. If you are still holding the button after two seconds, the third LED also turns on. If at any point you release the button, only the LEDs that have been turned on stay on. The next time you press the button, all the LEDs will turn off. Further button presses will continue the pattern.

	- *Hint: Don’t use delays [delay() will stall your code for the specified time]. Instead, think of a way to track time elapsed from the first button press using millis().*

#### Activity 8 - Morse Code (Challenge)
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
* [Activity 5 - 3 Click LED Toggle](https://github.com/bmesbuildteamucla/bmesbuildteamucla.github.io/blob/master/Workshops/Workshop%202%20-%20Coding%20and%20Arduino/Activity%205%20-%20LED%20Three%20Presses/README.md)
* [Activity 6 - 2 LED Random Blink](https://github.com/bmesbuildteamucla/bmesbuildteamucla.github.io/blob/master/Workshops/Workshop%202%20-%20Coding%20and%20Arduino/Activity%206%20-%20LED%20Blinking/README.md)
* [Activity 7 - Three LEDs](https://bmesbuildteamucla.github.io/Workshops/Workshop%202%20-%20Coding%20and%20Arduino/Activity%207%20-%20Three%20LEDs)
* [Activity 8 - Morse Code](https://bmesbuildteamucla.github.io/Workshops/Workshop%202%20-%20Coding%20and%20Arduino/Activity%208%20-%20Morse%20Code)
