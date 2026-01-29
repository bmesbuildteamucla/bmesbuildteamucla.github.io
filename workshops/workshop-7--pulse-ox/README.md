# Workshop 7 - Pulse Ox

## IMPORTANT DEADLINES: 

Winter:
* Week 5 [Project Timeline](https://docs.google.com/spreadsheets/d/1iXe73medv4pFezDHwyH74r_h56Ny7wXFiqEyXDhMIqo/edit?usp=share_link)
* Week 6 [Preliminary Design Review](https://docs.google.com/presentation/d/19sC7dH2UuXUHeNcOv0W1TxAFQRV5BMv53ZNprg9Kw_s/edit?usp=sharing)
* Week 8 Final Electrical Review
    * List of materials must be finalized by this week
    * KiCad Schematic must be sent to PMs for review
 * Week 10: KiCad PCB files due. PCBs will be ordered over Spring Break.

Spring:
* Week 1 or 2: Soldering + PCB Validation Workshop
* Week 9: [Internal Presentations](https://docs.google.com/presentation/d/1031YyMKs7IsTFLjsiL9ngZ-s-qNvRb3rZWXwRrrNzjc/edit?usp=sharing) 
* Week 10: Tech Project Symposium
  
## [Guidelines & extra resources](https://docs.google.com/presentation/d/13jmXClG_r-N-4WmNvx6YzDmx-mO47Yd74tS4BFfrxsE/edit?usp=sharing)

## Available Components
* [IR LEDs](https://www.digikey.com/en/products/detail/everlight-electronics-co-ltd/IR204/2675563)
* [Photodiodes](https://www.digikey.com/en/products/detail/everlight-electronics-co-ltd/PD333-3C-H0-L2/2675634)
* [Ceramic Capacitors 4.7 uF](https://www.digikey.com/en/products/detail/tdk-corporation/FA26X7R1H475KRU06/5866230)
* [MCP6041 Op Amps](https://www.digikey.com/en/products/detail/microchip-technology/MCP6041-I-P/413363)
* Various resistors, buttons, wires, and header pins from the SCC
* [LCD Screens](https://www.amazon.com/NOYITO-Yellow-Green-Backlight-Interface-MEGA2560/dp/B07SYPPTWN/)
* [USB-C Power Banks](https://www.amazon.com/Charging-10000mAh-Portable-Charger-Essentials/dp/B0FD3BTZHN/)
* Various Arduino kit components in the SCC

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

    ![Transimpedance Amplifier](https://bmesbuildteamucla.github.io/workshops/workshop-4--advanced-circuitry/transimpedance-amplifier-circuit-diagram.png)

2. Plot the output from the transimpedance amplifier using the Serial Plotter.
3. Print the output values on the Processing console.
  * Make sure you include these lines of code at the top of your Processing code and upload Standard Firmata from Arduino IDE each time you unplug your Arduino or switch from Arduino IDE code to Processing code
  ```c++
  import processing.serial.*;
  import cc.arduino.*;
  import org.firmata.*;
  ```
4. Attach a red LED and use it with the sensor (this is the basic pulse ox). We recommend using the jumper wires with male/female ends to connect the LED.
5. Using Processing, try to plot the pulse ox signal (use the `line()` function).


#### Activity 3 - Amplifying Signal
* Analyze the signal that you are receiving
  - How big is the signal?
  - Is the pulse graph visible yet?
* Add an appropriate non-inverting amplifier circuit
  - Calculate the theoretical gain

<!--* Your plot should look something like this:
-->

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
* This part is up to you to customize to your liking!
* What happens when the signal hits the end of the screen?
  - Can you make it reset or scroll?
  - Can you adaptively rescale the y-axis?
* Examples of other fun features you could add to your display:
  - Numerical BPM display
  - Blinking when BPM measurement has been achieved
  - Change line color based on heart rate
  - Anything else you can think of!
 
#### Note: Activities 6, 7, and 8 do not have to be completed in order. Your team should decide how to divide work and which order you would like to complete them in to best utilize your time. Proper time management is an important part of all engineering projects!
  
#### Activity 6 - Adding an Infrared (IR) LED
* Look at latter half of [these slides](https://docs.google.com/presentation/d/13jmXClG_r-N-4WmNvx6YzDmx-mO47Yd74tS4BFfrxsE/edit?usp=sharing) for details about why you would want to add an IR LED and how you would get started
* This step is optional, but it means that your final device will be a fully functional pulse oximeter (rather than just heart rate monitor)
* If you choose to do this, we can help you along the way but we don't have specific instructions like the other activities. You have all the knowledge and tools you need to guide yourself through it!
  
#### Activity 7 - PCB Design
* **Please read this entire section before working on your design**
* By now you should have a functioning circuit on your breadboard! 
* Now it's time to translate your circuit into a PCB design. Keep in mind that the example we showed in Module 7 was not the full circuit design. Your PCB design should include the following:
  - Red LED circuit (don't forget resistor!)
  - Photodiode (connected to transimpedance amp)
    - You can just use the same part as you did for the red LED because the diodes have the same footprint (see note below)
  - Both of your operational amplifier circuits (2 op amps total plus resistors)
  - Your low pass filter circuit (resistor and capacitor)
  - IR LED circuit (if you added this)
* **Use the following parts (NOT the parts we showed in Module) - Just copy and paste these into the add parts menu**
  - ***Resistors***: Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P7.62mm_Horizontal
  - ***Red LED, IR LED, and photodiode***: LED_THT:LED_D5.0mm
  - ***Capacitor***: Capacitor_THT:C_Disc_D6.0mm_W2.5mm_P5.00mm
  - ***Op Amps***: (a little more complicated)
    - ```Download MCP6041 Symbol and Footprint``` from this [Build Team KiCad Libraries](https://drive.google.com/drive/folders/1hwNMpJOX8Vhz9xLJ0M-7wDrhA3pnRFuU?usp=drive_link).
    - Follow these [instructions](https://www.snapeda.com/about/import/?plugin=&prev_ref=#KiCad6) to import the library into KiCad. Or, watch the video in the [KiCad Tutorials folder](https://drive.google.com/drive/folders/1Ws-rUEyWAYt_4fxkrh3LIJb50ylhu5OX?usp=drive_link)
    - You should now be able to find it in the add parts menu!
  - ***ESP32***: Follow the video in the [KiCad Tutorials folder](https://drive.google.com/drive/folders/1Ws-rUEyWAYt_4fxkrh3LIJb50ylhu5OX?usp=drive_link)
* We didn't show this in Module, but we recommend moving all of your parts on top of the ESP32 footprint so that your PCB is as small as possible (could fit on top of your casing)
* [**PCB DRC Settings**](https://docs.google.com/document/d/1qWOX2tQpcEFKrnEINHshy1QbcyVMniEwuVDaCoqFRYo/edit?usp=sharing)
* ***Do not order your PCB without approval from the Project Managers!***
* Important notes about PCBs:
  - The printed circuit board doesn't actually come with the parts, it just comes with "wires" that connects the parts and the holes that you solder your own parts onto. For your device, this includes the diodes (LEDs and photodiode), resistors, and op amps.
  - The footprint of a part is like its map or outline. It's the spot on your PCB where your part will go, and it has a specific size, shape, number of holes, and distance of holes. These holes are where you will solder on the legs of your part.
  - Soldering is a permanent method of attaching two metal parts together. It is the permanent version of plugging a wire or the legs of a circuit component into your breadboard. You use a hot pen-like device to add liquid metal that connects your PCB to the legs of the part you are attaching. This is the final step of building your PCB!
  
#### Activity 8 - Casing Design
* It's finally time to design (or finalize) your CAD model and get it 3D printed
* Design considerations
  - Finger hole size
    - Big enough for variety of finger sizes BUT
    - The smaller the distance between the red LED and photodiode, the stronger your reading will be
  - LED and photodiode hole size
    - Red LED, photodiode, and IR LED are different sizes!
      - Red LED is ~5.3 mm in diameter
      - Photodiode and IR LED are ~4.0 mm in diameter
      - We recommend adding ~0.2 mm of buffer to the hole size in your casing (e.g. red LED hole should be ~5.5 mm)
    - Spot for IR LED if you're adding that
  - Slot for your PCB to slide into the casing
    - Your PCB will be small enough for this if you followed all directions above (moving parts on top of ESP32)
    - Must be tall enough to accommodate your PCB with the Arduino Nano soldered on
    - You could also just secure the PCB on the bottom of your casing, but this will look much more bulky and unfinished
 * The makerspace is closed during workshop hours, so you'll need to go on your own 
   - Makerspace employees will help you!

#### Activity 9 - Button
* With your current circuit, the PulseOx has to be controlled from the laptop to begin measuring pulse/blood oxygenation and stop for reset. To make the PulseOx more convenient for users to control, you can consider adding a button.
* Design considerations
  - Think about where the button should be placed on/in the casing for easy access, edit the CAD as needed.
  - Update Arduino code to allow control through button presses
    - What type of button control is the most intuitive to implement? (ex. toggle, long press to activate, hold down the button…etc.)
    - What should the button control?  (ex. turning the pulse-ox on & off, resetting the pulse-ox, clearing the window…etc.)
    - What initial state do you want the pulse-ox to be in when connected to power/the laptop? Update setup variable values as needed
  - Find or add additional space on the PCB to fit the button circuit in, either directly onto the circuit board or set up extension wires for the button to connect to.
  - Ensure to make additions before sending us the PCB design for printing!

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
