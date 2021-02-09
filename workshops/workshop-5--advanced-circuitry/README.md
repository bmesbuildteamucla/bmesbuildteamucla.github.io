# Workshop 5 - Advanced Circuitry

## Activities:

#### Activity 1 - Set Up Circuits
* Set up a potentiometer circuit
* Set up separate op amp circuit
  - *Hint: Search up op amp data sheet to determine pin configuration*
  - *VDD is (+), VSS is (-)*

#### Activity 2 - Inverting Amplifier
* Set up an inverting amplifier circuit with the potentiometer output as Vin

    ![Inverting Amplifier](https://bmesbuildteamucla.github.io/workshops/workshop-5--advanced-circuitry/inverting-amplifier-circuit-diagram.png)

* Simultaneously measure the voltage from the potentiometer and the op amp
  <details>
  <summary>(Click me) What is the op amp's output voltage?</summary>
  <br>
  The op amp's output voltage is 0V
  <br>
  <br>
      <details>
      <summary>Why? (Think before opening)</summary>
      <br>
      An op amp can only produce an output voltage within the range of voltages that it's supplied with (ex: 0V - 5V). By using an inverting amplifier, you are telling the op amp to produce a negative output voltage. However, the lowest voltage it is supplied with is 0V, so the output voltage is 0V. (This should hold true for low voltages, but since the Arduino has limitations, there may be a signal present at higher input voltages.)
      <br>
      </details>
  </details>

#### Activity 3 - Non-inverting Amplifier
* Set up an non-inverting amplifier circuit with the potentiometer output as Vin

    ![Non-Inverting Amplifier](https://bmesbuildteamucla.github.io/workshops/workshop-5--advanced-circuitry/non-inverting-amplifier-circuit-diagram.png)
* Simultaneously measure the voltage from the potentiometer and the op amp
* Compare the two voltages and see if they match the expected gain


#### Activity 4 - Transimpedance Amplifier
* Set up a transimpedance amplifier circuit with an OP905 photodiode as the current source

    ![Transimpedance Amplifier](https://bmesbuildteamucla.github.io/workshops/workshop-5--advanced-circuitry/transimpedance-amplifier-circuit-diagram.png)

* Measure the voltage from the op amp and see how it changes when you cover the photodiode
  <details>
  <summary>(Click me) What's so important about this amplifier?</summary>
  <br>
  This is the basis of our Pulse Ox circuit! Place your finger on the photodiode and shine a red LED on top of your fingernail. Keep everything steady and see if you can detect your pulse!
  <br>
  <br>
      
  </details>

#### Activity 5 - Filters
* Set up a low pass and high pass filter
  - Filter your potentiometer output using each filter and observe what happens
  - You can read in both the unfiltered and filtered signals through your Arduino and monitor using the Serial Plotter
  - Try to filter at different frequencies by using different resistors/capacitors and see their effect on filtering
  - Turn the potentiometer dial quickly/slowly and see the effect it makes on the output graph. Does this match your expectations for the different filter types?
  
* Combine the low pass and high pass filters together to create a band pass filter
  - Compare with using each filter by itself


<!--
hide solutions
-->
<!--
## Solutions:
#### Activity 3 - Non-inverting Amplifier
* Circuit:

    ![Circuit](https://bmesbuildteamucla.github.io/workshops/workshop-5--advanced-circuitry/non-inverting-amplifier-arduino-circuit.png)
    
* Code:
    ```c++
    void setup()
    {
      Serial.begin(9600);
    }

    void loop()
    {
      Serial.print("Original: ");
      Serial.print(analogRead(A0));
      Serial.print("	");
      Serial.print("Amplified: ");
      Serial.println(analogRead(A2));
    }
    ```

#### Activity 4 - Transimpedance Amplifier
* Circuit:

    ![Circuit](https://bmesbuildteamucla.github.io/workshops/workshop-5--advanced-circuitry/transimpedance-amplifier-arduino-circuit.png)
    
* Code:
    ```c++
    void setup()
    {
      Serial.begin(9600);
    }

    void loop()
    {
      Serial.println(analogRead(A2));
    }
    ```
-->
