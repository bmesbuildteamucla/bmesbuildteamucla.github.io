# Activity 8 - Morse Code (Challenge)

### Task:
Write a program that lets you to input a word or sentence into the serial monitor and translate it to Morse code. Have an LED flash the Morse code.

*Hint: Read in inputted string and cycle through it using loops*

*Optional: Print out Morse code in Serial Monitor and produce Morse code sound using piezo buzzer*

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
![Circuit](https://bmesbuildteamucla.github.io/Workshops/Workshop%202/Activity%208%20-%20Morse%20Code/Circuit.png)

Circuit uses built in LED

### Code:
```c
String incomingString; // for incoming serial data
String morse[26] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..",     // A-I
                    ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.",   // J-R 
                    "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};         // S-Z
int buzzer = 9;
  
void setup()
{
  pinMode(13, OUTPUT);
  Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
}

void loop()
{
  if (Serial.available() > 0)                                                        // send data only when you receive data
  {
    incomingString = Serial.readString();                                            // read incoming string
    Serial.println(incomingString);                                                  // print incoming string
    int stringLength = incomingString.length();                                      // find length of incoming string
    for (int stringIndex = 0; stringIndex < stringLength; stringIndex++)             // cycle through string
    {
      int morseInput = incomingString[stringIndex];                                  // identify letter
      int morseLength = morse[morseInput - 97].length();                             // find length of morse letter
      for (int morseIndex = 0; morseIndex < morseLength; morseIndex++)               // cycle through morse code
      {
        if (morse[morseInput - 97][morseIndex] == '.')                               // dot LED, sound, print
        {
          digitalWrite(13, HIGH);
          Serial.print(".");
          tone(buzzer, 392);
          delay(200);
          noTone(buzzer);
          digitalWrite(13, LOW);
        }
        else                                                                         // dash LED, sound, print
        {
          digitalWrite(13, HIGH);
          Serial.print("-");
          tone(buzzer, 392);
          delay(600);
          noTone(buzzer);
          digitalWrite(13, LOW);
        }
        delay(200);                             // time between dots or dashes
      }
      if (morseInput == 32)                     // if space
      {
        Serial.print("/");                      // slash between words
        delay(200);
      }
      Serial.print("  ");                       // space between letters
      delay(600);
    }
    Serial.println();
  }
}
```
