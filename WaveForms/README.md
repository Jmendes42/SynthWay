# Wave forms
Sound wave forms experiments on Arduino 

To complete the experiments some hardware is needed. Some sound measuring device, speakers or headphones, some electronic components and of course a Arduino board. I'll be using a osciloscope (very ancient) to have a visual reference of the waves, a soundbar (active speaker) to hear them, a list of electronic components (will be displayed at the end of the file) and a Arduino Nano board.

Before starting, it's important to review some setup aspects. A speaker should not be directly connected to an arduino pin for it will draw too much current from it, instead it's recomended to connect a series resistor of at least 100R between them. And it's also not good to have DC current on a speaker device, so for that a capacitor between the connections is recomended, the values between 10uf to 100uf. The higher the value the lower frequencies will go trough


![Screenshot from 2022-08-24 15-02-00](https://user-images.githubusercontent.com/74921179/186438751-b533e02e-82ec-4015-a1c7-29371b46151e.png)
