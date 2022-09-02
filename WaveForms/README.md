# Wave forms
Sound wave forms experiments on Arduino 

To complete the experiments some hardware is needed. Some sound measuring device, speakers or headphones, some electronic components and of course a Arduino board. I'll be using a osciloscope (very ancient) to have a visual reference of the waves, my speaker (active speaker) to hear them, a list of electronic components (will be displayed at the end of the file) and a Arduino uno board.

Before starting, it's important to review some setup aspects. A speaker should not be directly connected to an arduino pin for it will draw too much current from it, instead it's recomended to connect a series resistor of at least 100R between them. And it's also not good to have DC current on a speaker device, so for that a capacitor between the connections is recomended, the values between 10uf to 100uf. The higher the value the lower frequencies will go trough (See schematics).

List:
1x 100R resistor
1x 100uf capacitor
1x 10k potentiometer
1x jack socket 3.5mm
