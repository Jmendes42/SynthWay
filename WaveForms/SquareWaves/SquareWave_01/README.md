# Square Wave 01

Now that I understand how to create a square wave, its time to start doing it in a more sofisticated way, rising and lowering the signal in a pin spends most of the time in the delay() function and while that happens everything stops. 

For these new experiment I'll be using the function tone() to generate the wave. The tone() is a predefined built-in function that can output a tone on any pin, but the important aspect to it is that as soon as the tone starts the control comes back to the program allowing for other stuff to be done. 

I'll be adding a potentiometer (10K) to regulate frequency.

Schematic:
![Schematic_New Project_2022-09-02](https://user-images.githubusercontent.com/74921179/188050045-8fc6af8b-547f-4b82-84de-2eb533845b02.png)