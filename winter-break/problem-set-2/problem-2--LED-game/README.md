# [Winter Break Problem Set](https://bmesbuildteamucla.github.io/winter-break/problem-set-2)
## Problem 2 - LED Game

### Task:
* You’re bored and decide to make a game for your friends. In this game, you have 5 LEDs that each have their own corresponding button (LED and button are separate circuits, but each button is associated with a particular LED). The LEDs are set up in a row. When an LED’s button is pressed, its state changes (meaning if it was on, it turns off, and vice versa). It will also change the state of the two LEDs next to it. For example, if the button for the 4th LED is pressed, the 3rd, 4th, and 5th LED would change states. If the button for the 1st or 5th LED is pressed, the state change wraps around. For example, if the 5th button is pressed, the 4th, 5th, and 1st LED change states. The objective of the game is to figure out what sequence of button presses turns all of the LEDs on.

* Construct this circuit and corresponding Arduino code for the game. Additionally, comment the correct sequence of button presses at the bottom of the code (you can insert a comment using // in Arduino).

  - *Hint: Use arrays!!*

### Circuit:
![Circuit](https://bmesbuildteamucla.github.io/winter-break/problem-set-2/problem-2--LED-game/circuit.png)

### Code:
```c
int LED [7] = {5, 1, 2, 3, 4, 5, 1};
int buttons [7] = {10, 6, 7, 8, 9, 10, 6};

void setup()
{
  for (int i = 1; i < 6; i++)
    pinMode(LED[i], OUTPUT);
  
  for (int i = 1; i < 6; i++)
    pinMode(buttons[i], INPUT);
}

void loop()
{
  for (int i = 1; i < 6; i++)
  {
    if (digitalRead(buttons[i]))
    {      
      if(digitalRead(LED[i]))                 // LED for button pressed
        digitalWrite(LED[i], LOW);
      else
        digitalWrite(LED[i], HIGH);
      
      if(digitalRead(LED[i - 1]))             // LED left of button pressed
        digitalWrite(LED[i - 1], LOW);
      else
        digitalWrite(LED[i - 1], HIGH);
      
      if(digitalRead(LED[i + 1]))             // LED right of button pressed
        digitalWrite(LED[i + 1], LOW);
      else
        digitalWrite(LED[i + 1], HIGH);
      
      while (digitalRead(buttonPin) == HIGH)
      {
        // do nothing while button is still pressed so that code only runs once
      }
    }
  }
}
```
