# Workshop 6 - Pulse Ox

## Activities:

#### Activity 1 - Storing Data in an Array
* Read [Arrays](https://processing.org/tutorials/arrays/) until "Array of Objects"

  <details>
  <summary>(Click me) Why do we need arrays for our pulse ox?</summary>
  <br>
  Each element in an array has an index value and a value corresponding to the index, essentially two variables
  <br>
  <br>
      <details>
      <summary>(Click me) What do two variables let us do? (Think before opening)</summary>
      <br>
      - First, two variables (x & y) allow us to plot a curve on a 2D screen
      <br>
      - Second, our pulse ox needs to track two variables: time(x) and blood oxygenation(y)
      <br>
      - Arrays allow us to efficiently store and display data
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
  <summary> (Click me) What size array should we declare? (Think before opening. Hint: You need to display this to your Processing window)</summary>
  <br>
  In order to fill the screen size, the array size should be the width of the screen [width]
  <br>
  </details>

#### Activity 2 - Transimpedance Amplifier and Processing
1. Set up a transimpedance amplifier circuit with an OP905 photodiode as the current source and an appropriate resistor value (try 1 megohm or higher).

    ![Transimpedance Amplifier](https://bmesbuildteamucla.github.io/workshops/workshop-5--advanced-circuitry/transimpedance-amplifier-circuit-diagram.png)

2. Plot the output from the transimpedance amplifier using the Serial Plotter.
3. Print the output values on the Processing console.
4. Attach a red LED and use it with the sensor (this is the basic pulse ox). We recommend using the jumper wires with male/female ends to connect the LED.
5. Using Processing, try to plot the pulse ox signal (use the `line()` function).


#### Activity 3 - Amplifying Signal
* Analyze the signal that you are receiving
  - How big is the signal?
  - Is the pulse graph visible yet?
* Add an appropriate non-inverting amplifier circuit
  - Calculate the theoretical gain

#### Activity 4 - Filtering Signal
* At this point, you should be able to see your pulse, but it should be very noisy.
  - I.e. you should have the photodiode connected to the transimpedance amplifier and non-inverting amplifier and are taking an output from the non-inverting amplifier.
* Analyze the amplified signal
  - What frequencies do you need to filter out?
  - Is the pulse graph distinguishable?
* Add appropriate filter(s) and experiment with different filter frequencies
  - Calculate the theoretical cutoff frequencies

#### Activity 5 - Customize Processing Display
* Now that the signal is optimized, work on how the signal is displayed
* Experiment with different color, weights, connections, etc
* What happens when the signal hits the end of the screen?
  - Can you make it reset or scroll?
  - Can you adaptively rescale the y-axis?


<!--
hide solutions
-->
<!--
## Solutions:
* Example Processing code:

  ```java
  import processing.serial.*;
  import cc.arduino.*;
  Arduino jack;   //declare Arduino object
  int sensorPin = 0;
  int[] data;  //declare array
  int i = 0;  //initial index value

  void setup()
  {
    printArray(Arduino.list());  //lists USB ports, find the one connected to Arduino
    jack = new Arduino(this, Arduino.list()[0], 57600);  //may need to change index value based on printed array
    size(1000, 500);
    background(102);  //gray background
    //strokeJoin(ROUND); 
    jack.pinMode(sensorPin,Arduino.INPUT);
    data = new int[width];  //create array of size: width
    data[i] = 0;
    i++;
  }

  void draw()
  {
    // pulse ox signal line
    stroke(#ff0000);  //signal color = red
    strokeWeight(1);
    int rawNoAmp = jack.analogRead(sensorPin);
    float scaledNoAmp = map(rawNoAmp, 0, 1023, 0, height);  //might have to change range
    data [i] = (int)scaledNoAmp;
    println(data[i]);
    line(i-1, height - data[i-1], i, height - data[i]);  //draw signal line from previous point to current point


    // creating a vertical red line to show where current data is
    stroke(102);
    strokeWeight(1);
    line(i, 0, i, height);  //erase previous red line
    i++;
    stroke(#ff0000);
    line(i, 0, i, height);  //show new red line


    // when signal reaches end of screen, have signal restart at beginning
    if(i == width)
    {
      data[0] = data[width-1];  //have last data point be first data point of new data
      i = 1;
      stroke(102);
      line(0, 0, 0, height);
    }
  }
  ```
-->
