# [Winter Break Problem Set](https://bmesbuildteamucla.github.io/winter-break/problem-set-2)
## Problem 5 - Morse Code

### Task:
Write a program that lets you to input a word or sentence into the serial monitor and translate it to Morse code. Have an LED flash the Morse code.

*Hint: Read in inputted string and cycle through it using loops*

*Optional: Print out Morse code in Serial Monitor*

##### Morse code array:
 ```c
String morse[26] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..",     // A-I
                    ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.",   // J-R 
                    "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};         // S-Z
```
##### Serial read functions:
```c
if (Serial.available() > 0) // send data only when you receive data
Serial.read() // reads incoming serial data
Serial.readString() // reads characters from the serial buffer into a String
```

### Circuit:
![Circuit](https://bmesbuildteamucla.github.io/winter-break/problem-set-2/problem-5--morse-code/circuit.png)

Circuit uses built in LED

### Code:
```c
String incomingString; // for incoming serial data
String morse[26] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..",     // A-I
                    ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.",   // J-R 
                    "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};         // S-Z
int LED = 13;
int shortDelay = 200;
int longDelay = 600;

void setup()
{
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if (Serial.available() > 0)                                                        // send data only when you receive data
  {
    incomingString = Serial.readString();                                            // read and store incoming string
    Serial.println(incomingString);                                                  // print incoming string so you can see it
    int stringLength = incomingString.length();                                      // find length of incoming string
    for (int stringIndex = 0; stringIndex < stringLength; stringIndex++)             // cycle through string (array of chars)
    {
      int morseInput = incomingString[stringIndex];                                  // identify letter
      int morseLength = morse[morseInput - 97].length();                             // find length of morse letter
      for (int morseIndex = 0; morseIndex < morseLength; morseIndex++)               // cycle through morse code
      {
        if (morse[morseInput - 97][morseIndex] == '.')                               // dot LED & print
        {
          digitalWrite(LED, HIGH);
          Serial.print(".");
          delay(shortDelay);
          digitalWrite(LED, LOW);
        }
        else                                                                         // dash LED & print
        {
          digitalWrite(LED, HIGH);
          Serial.print("-");
          delay(longDelay);
          digitalWrite(LED, LOW);
        }
        delay(shortDelay);                      // time between dots or dashes
      }
      if (morseInput == 32)                     // if space (won't run in for loop because length is 0)
      {
        Serial.print("/");                      // slash between words
        delay(shortDelay);
      }
      Serial.print("  ");                       // space between letters
      delay(longDelay);
    }
    Serial.println();                           // new line for next input
  }
}
```
