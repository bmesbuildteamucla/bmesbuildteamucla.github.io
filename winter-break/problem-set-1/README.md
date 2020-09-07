# Winter Break Problem Set 1

These three problems are some of the same LED activities we did during workshop. We want to make sure that all of you can confidently complete these problems before attempting the second part.

Do each problem in a separate TinkerCAD circuit. When you finish,  email [bmes.build.team@gmail.com]() with the TinkerCAD share link (found at the top right of the page) for each problem. Please make your circuits organized enough so we can see the connections.

## Problems:

#### Problem 1 - LED Button
* LED is on when the button is pressed and is off when the button is unpressed. Make sure that there are two separate circuits: one for the button and one for the LED (have the Arduino read an input from the button and then output a signal to the LED, don’t just complete an LED circuit using a button).

#### Problem 2 - LED Light Switch
* Button press turns the LED on when it is off, and vice versa. The circuit should be the same as the first problem.

  - *Hint: If you are using an if statement to detect button presses, add this segment of code at the end of your conditional statement to prevent button double presses:*
  
    ```c++
    while (digitalRead(buttonPin) == HIGH)
    {
        // empty while loop that does nothing while button is pressed so that code above only runs once
    }
    ```

#### Problem 3 - Three LEDs
* You have one button and three separate LEDs. When you hold the button, the first LED turns on. If you are still holding the button after one second, the second LED also turns on. If you are still holding the button after two seconds, the third LED also turns on. If at any point you release the button, only the LEDs that have been turned on stay on. The next time you press the button, all the LEDs will turn off. Further button presses will continue the pattern.

  - *Hint: Don’t use delays [delay() will stall your code for the specified time]. Instead, think of a way to track time elapsed from the first button press using millis().*


<!--
hide solutions
-->

## Solutions:
* [Problem 1 - LED Button](https://bmesbuildteamucla.github.io/Winter%20Break/Problem%20Set%201/Problem%201%20-%20LED%20Button)
* [Problem 2 - LED Light Switch](https://bmesbuildteamucla.github.io/Winter%20Break/Problem%20Set%201/Problem%202%20-%20LED%20Light%20Switch)
* [Problem 3 - Three LEDs](https://bmesbuildteamucla.github.io/Winter%20Break/Problem%20Set%201/Problem%203%20-%20Three%20LEDs)
