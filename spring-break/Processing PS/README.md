# Processing Problem Set

Before you start this problem set, please make sure to review Module 4 Processing and have your Arduino kit on-hand. Even if you are super confident about these activities, please read through the solutions and make sure you understand everything.

These problems are designed to put you on track to integrating Processing with your Arduino circuitry in order to produce a graph (this will be helpful in Spring Quarter when you work with your groups to create your pulse oximeters). Try your best to use your current knowledge to solve them individually. Do not hesitate to message any of us for help!

* *Note for all problems: Since Processing is separate from the Arduino IDE, you must be sure to appropriately designate a class to call the Arduino-specific functions*
  
## Problems:

#### Problem 1 - Plotting the Dots 
* One of the first steps to creating a graph is to plot the data points.

* Set up a simple circuit with a photodiode and resistor. Collect the signal detected by the photodiode and plot the points on a "Signal versus Time" graph in Processing.
  
#### Problem 2 - Connecting the Dots
* Once you are able to plot the data points, the next step is to connect the dots.

* Using the same circuit as before, find a way to use Processing code to connect the data points as they are plotted. As the code runs, it should draw a continuous line, similar to what the Arduino IDE Serial Plotter shows. 

#### Problem 3 - Moving the Graph
* By this point, you should have a line graph that appears to stop as it reaches the end of the set screen size.

* Using what you know about Processing, code a way for the graph to reset and continue drawing when it reaches the end of the designated screen size. 
