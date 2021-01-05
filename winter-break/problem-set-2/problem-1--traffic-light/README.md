# [Winter Break Problem Set](https://bmesbuildteamucla.github.io/winter-break/problem-set-2)
## Problem 1 - Traffic Light

### Task:
* You are setting up a new traffic light for the De Neve crosswalk. You want to give both the pedestrians and the drivers the power to change the light at the press of a button. Let’s assume that people don’t press the button unless they need to (so a pedestrian doesn’t stop to push the button if he or she can already cross).

* Set up a circuit with a green, yellow, and red LED like a standard traffic light. Initially the red LED will be on. When the button is pressed the first time (we assume by a driver), the light will turn green and stay green until the button is pressed again. When the button is pressed next (this time by a pedestrian), transition the LEDs from green to red. This involves turning the yellow LED on for 5 seconds before the red LED is turned on. Further button presses will continue this pattern. Construct a circuit and Arduino code that will accomplish this task. 

  - *Note: Assume that the button will only be pressed when it is not in a transition state (i.e. when the yellow LED is on). This means you can use delay().*

### Circuit:
![Circuit](https://bmesbuildteamucla.github.io/winter-break/problem-set-2/problem-1--traffic-light/circuit.png)

### Code:
