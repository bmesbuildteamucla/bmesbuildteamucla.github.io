<ul class="breadcrumb">
	<li><a href="{{ "/" | absolute_url }}">HOME</a></li>
	<li>WORKSHOP 1 - BASIC CIRCUITRY</li>
</ul>

# Workshop 1 - Basic Circuitry

## Activities:

#### Activity 1 - Junction Rule
* Make the following circuit and measure the voltage drop at different points to prove the junction rule with Ohm’s law

	- R1, R2, and R3 are 100, 220, and 330 Ohms respectively
	
	 ![Circuit](https://bmesbuildteamucla.github.io/workshops/workshop-1--basic-circuitry/activity-1-circuit.jpg)
	
	- Relevant Equations:
	
		> Ohm’s Law: V = IR
		>
		> Resistors in Series: Req = R1 + R2 + R3 + . . . + Rn
		>
		> Resistors in Parallel: 1/Req = (1/R1) + (1/R2) + (1/R3) + . . . + (1/Rn)
		>
		> Junction Rule: Iin = Iout


#### Activity 2 - Voltage Divider
* Prove the voltage divider equation using a voltmeter.

     ![Circuit](https://bmesbuildteamucla.github.io/workshops/workshop-1--basic-circuitry/activity-2-circuit.png)
      
	- Voltage Divider Equation:

	    > Vout = Vin (R2/ (R1 + R2))


#### Activity 3 - LEDs and Data Sheets
* Use a data sheet to find the optimal current for your LED and set up an appropriate circuit.
* Determine mathematically how increasing the resistance of the resistor will affect the current flowing across the LED (the brightness of an LED is proportional to the current flowing throught it). Prove your conclusion by increasing the resistance of the resistor and observe the brightness of the LED.
* Set up LEDs (each with a resistor) in parallel and series with each other. Determine the differences in the brightness and give a reason for your observation with what we learned in the module.

	- Relevant Equations:

	  > V = IR
	  >
	  > P = IV = I^2R = V^2/R


#### Activity 4 - LEDs and Switches
* Build a circuit with a button and an LED where the LED turns on when the bubtton is pressed. Then try to make a circuit where the LED turns off when the button is pressed.


<!--
hide solutions
-->

## Solutions:
#### Activity 4 - LEDs and Switches

- Green LED circuit is completed when button is pressed, so LED turns on
- Blue LED circuit is shorted when button is pressed (creates path of less resistance), so LED turns off

![Circuit](https://bmesbuildteamucla.github.io/workshops/workshop-1--basic-circuitry/activity-4-circuit-solution.png)
