# Workshop 2

## Problems:

#### Activity 1 -
* Turn the LED on after 5 seconds using a conditional statement. (Don’t use delay().)

#### Activity 2 -
* Have the yellow LED turned on, then every 5 seconds turn off the yellow LED and have the red LED flash 10 times.

#### Activity 3 -
*

#### Activity 4 -
*

#### Activity 5 -
*

#### Activity 6 -
*

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

* [Activity 7 - Three LEDs](https://bmesbuildteamucla.github.io/Workshops/Workshop%202/Activity%207%20-%20Three%20LEDs)
* [Activity 8 - Morse Code](https://bmesbuildteamucla.github.io/Workshops/Workshop%202/Activity%208%20-%20Morse%20Code)
