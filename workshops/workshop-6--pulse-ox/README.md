# Workshop 6 - Pulse Ox

## Activities:

#### Activity 1 - Storing Data in an Array
* Read [Arrays](https://processing.org/tutorials/arrays/){:target="_blank"} until "Array of Objects"

  <details>
  <summary>Why do we need arrays for our pulse ox?</summary>
  <br>
  Each element in an array has an index value and a value corresponding to the index, essentially two variables
  <br>
  <br>
      <details>
      <summary>What do two varaibles let us do? (Think before opening)</summary>
      <br>
      - First, two variables (x & y) allow us to plot a curve on a 2D screen.
      <br>
      - Second, our pulse ox needs to track two variables: time(x) and blood oxygenation(y).
      <br>
      - Arrays allow us to efficiently measure and display the data.
      <br>
      </details>
  </details>

* Example code:
  ```c++
  int[] data; // Declare
  data = new int[5]; // Create
  data[0] = 19; // Assign
  
  int[] data = new int[5]; // Declare, create
  data[0] = 19; // Assign
  
  int[] data = { 19, 40, 75, 76, 90 }; // Declare, create, assign
  ```

  <details>
  <summary>What size array should we delcare? (Think before opening)</summary>
  <br>
  In order to fill the screen size, the array size should be the width of the screen [width]
  <br>
  </details>

#### Activity 2 - Transimpedance Amplifier and Processing
1. Set up a transimpedance amplifier circuit with an OP905 photodiode as the current source

    ![Transimpedance Amplifier](https://bmesbuildteamucla.github.io/workshops/workshop-5--advanced-circuitry/transimpedance-amplifier-circuit-diagram.png)

2. Plot the input from the transimpedance amplifier using the Serial Plotter
3. Print the input values on the Processing console
4. Attach a red LED and use it with the sensor (this is the basic pulse ox)
5. Using Processing, try to plot the pulse ox signal (use the `line()` function)


#### Activity 3 - Amplifying Signal
* Analyze at the signal that you are receiving
* How big is the signal?
* Add appropriate amplifier circuits and experiment with different filter frequencies
  - Note the gain used

#### Activity 4 - Filtering Signal
* Analyze the amplified signal
* What frequencies do you need to filter out?
* Add appropriate filters and experiment with different filter frequencies
  - Note the frequencies used

#### Activity 5 - Customize Processing Display
* Now that the signal is optimized, work on how the signal is displayed
* Experiment with different color, weights, connections, etc
* What happens when the signal hits the end of the screen?
  - Can you make it reset or scroll?


## Solutions:
* 
