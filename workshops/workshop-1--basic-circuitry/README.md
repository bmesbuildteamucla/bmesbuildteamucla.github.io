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


#### Activity 3 - LEDs and Current
* Determine mathematically how increasing the resistance of the resistor will affect the current flowing across the LED (the brightness of an LED is proportional to the current flowing throught it). Prove your conclusion by increasing and decreasing the resistance of the resistor and observing the brightness of the LED.
	- Don't use a resistor lower than 220 Ohms
* Next, set up 2 LEDs in parallel with each other. Make sure each LED has its own resistor! Then set up the same LEDs in series with each other. Observe the differences in the brightness and give a reason for your observation using what we learned in the module.

	- Relevant Equations:

	  > Ohm's Law:
	  > 
	  >  V = IR
	  >
	  > Power equation:
	  > 
	  > P = IV = I^2R = V^2/R


#### Activity 4 - LEDs and Switches
* Build a circuit with a button and an LED where the LED turns on when the button is pressed. Then, try to make a circuit where the LED turns off when the button is pressed.



## Solutions:
#### Activity 1 - Ohm's Law
* First measure the voltage across R1 (place multimeter probes on each side of R1), then measure the current going through R1 (place the probes in series with R1). Plug the voltage and current values into Ohm's law and verify that they equal the resistor value. A small error is fine, this is due to allowable error in your circuit components.
* Diagram of measuring current through R1 (V through R1 is 3.85 V in this case and R1=100, so Ohm's Law checks out):

![image](https://user-images.githubusercontent.com/54077199/206894658-5ee09840-63bd-41f0-8952-ce7ea941c68a.png)

* Next, measure the current going through R2 and R3. These values should add up to the current through R1, which was 38.5 mV.
* Note that the circuit has been rearranged in order to measure the current going into R2. This is a bit of a difficult concept. We want to measure the current after the junction and before R2, so we have staggered R2 and R3 in order to redirect the current properly. The area that we are measuring in is highlighted in the circuit schematic below:

![circuit image](https://user-images.githubusercontent.com/54077199/206895363-c5b1b3b8-841a-41ed-bc67-e39b370395c7.JPG)
![image](https://user-images.githubusercontent.com/54077199/206895249-9b7797ae-f77c-4cb6-9d29-2e18412eb9a9.png)
* Note that the current value is displaying as negative because we have placed the negative lead of the multimeter on the positive side of the current direction. This doesn't matter, the absolute value of the measurement is still accurate.
* Measuring current going through R3:

![image](https://user-images.githubusercontent.com/54077199/206895509-e6eb4c4d-1811-4588-98c5-2a5d5e37cb90.png)

* The voltage values measured across R2 and R3 were both 5.09 V (they both receive the same voltage because voltage does not split in parallel). Plugging this into Ohm's law with either of the resistor/current combinations verifies this value.
* Now we can finally verify the Junction Rule by verifying that I1 = I2 + I3: 

	> 23.1 mA + 15.4 mA = 38.5 mA
* Yay!

***

#### Activity 2 - Voltage Divider
- It's simplest to use the same resistor value for R1 and R2 - this makes your Vout half of your Vin
- Measure Vout by attaching your multimeter to either side of R2 (the resistor closer to ground)
- You can vary the values of R1 and R2 to see how Vout changes
- You can also use your Arduino as a voltage source (Vin would be 5V instead of the 9V from the battery)

![image](https://user-images.githubusercontent.com/54077199/206894031-6263f1f0-849d-4606-abcb-3ae485866402.png)

***

#### Activity 3 - LEDs and Current
* According to Ohm's Law, the voltage drop across a resistor is directly proportional to the resistance. If the resistance is increased, the voltage drop increases. Since the resistor is placed before the LED in series, the LED receives less voltage if more voltage is "used up" by the resistor. Since power is directly proportional to voltage, the LED gets less power and therefore becomes less bright.
* When the LEDs are in series, each LED receives only a portion of the total voltage because the effective voltage drops after each circuit component.
* When the LEDs are in parallel, they both receive the full voltage value because voltage does not "split" in parallel. They both have equal access to the original voltage source. Since power is directly proportional the voltage, both LEDs receive more power in parallel and therefore appear brighter.

***

#### Activity 4 - LEDs and Switches

- Green LED circuit is completed when button is pressed, so LED turns on
- Blue LED circuit is shorted when button is pressed (creates path of less resistance), so LED turns off

![Circuit](https://bmesbuildteamucla.github.io/workshops/workshop-1--basic-circuitry/activity-4-circuit-solution.png)


