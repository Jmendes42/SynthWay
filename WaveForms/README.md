# Wave forms
Sound wave forms experiments on Arduino 

To complete the experiments, some hardware is needed. Some sound measuring device, speakers or headphones, some electronic components and of course an Arduino board. I'll be using an oscilloscope (very ancient) to have a visual reference of the waves, my speaker (active speaker from Circuit Basics website) to hear them, a list of electronic components (will be displayed at the end of the file) and an Arduino UNO board.

Before starting, it's important to review some setup aspects. A speaker should not be directly connected to an Arduino pin as it will draw too much current from it, instead it's recommended to connect a series resistor of at least 100R between them. And it's also not good to have DC current on a speaker device, so for that a capacitor between the connections is recommended, the values between 10uf to 100uf. The higher the value, the lower frequencies will go through (See schematics).

List:

1x 100R resistor

1x 100uf capacitor

1x 10k potentiometer

1x jack socket 3.5mm

1x Jack

Breadboards
