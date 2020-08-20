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
