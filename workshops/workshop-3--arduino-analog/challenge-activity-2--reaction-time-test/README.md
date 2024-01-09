# [Workshop 3 - Arduino Analog](https://bmesbuildteamucla.github.io/workshops/workshop-3--arduino-analog)

## Challenge Activity: Reaction Time Test

### Task:
* Use an LED and a piezo buzzer to make a fun game! Have the LED or piezo buzzer turn on randomly so that the user has to press the button as fast as possible to turn it off. Have the reaction speed be printed in the serial monitor each time. See who has the fastest reaction times :)
* Possible functions to use
  ```c++
  random(start of range, end of range); //output a random number between the defined range
  randomSeed(integer seed value); //initializes the random number generator, each seed value corresponds
                                  //to a particular pseudorandom number list
  //quesiton: How to get a truly random number generator each time the code is restarted?
  //What on the Arduino can output relatively random values?
  ```

### Circuit:
![Circuit](https://bmesbuildteamucla.github.io/workshops/workshop-3--arduino-analog/challenge-activity-2--reaction-time-test/W3ReactionTime_Circuit.png)
### Code:
```c++
// Reaction time experiment of one LED. 
// LED will flash 3 times before the start of the experiment.

int LED = 2;
int LEDState = LOW;
int Button = 7;
int ButtonState = LOW;
// Time Variables
long randDelay;
long newT;
long oldT;
long deltaT;

void setup() 
{
  pinMode(LED, OUTPUT); 
  pinMode(Button, INPUT);
  Serial.begin(9600);
  
  // Three initial blinks
  Serial.println("Prepare. Reaction time measurements will begin shortly!");
  for (int i = 0; i <= 2; i++) 
  {
    digitalWrite(LED, HIGH);
    delay(250);
    digitalWrite(LED, LOW);
    delay(250);
  }
  randomSeed(analogRead(A0));
  randDelay = random(3000, 6000);
  delay(randDelay);
}

void loop() 
{
  ButtonState = digitalRead(Button);//See if button is being pressed.

  // Critera for trial start.
  if (LEDState == LOW && ButtonState == LOW) 
  {
      digitalWrite(LED, HIGH);   
      oldT = millis();
      LEDState = HIGH;
  }
 
  // Criteria for trial end. 
  if (LEDState == HIGH && ButtonState == HIGH) 
  {
    // Record time when button was pressed and turn off LED
    newT = millis();
    digitalWrite(LED, LOW);   

    // Print to console the time differnce between LED turn off to button pressed.
    deltaT = newT - oldT;  
    Serial.println(deltaT);

    // Reset trial and wait a random amount of time for next trial.
    LEDState = LOW;
    randDelay = random(1000, 3000);
    delay(randDelay);
  }
}
```
