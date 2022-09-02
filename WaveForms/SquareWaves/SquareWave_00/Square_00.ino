#define outPin 5

byte    frequency = 1000;

void setup() 
{
  pinMode(outPin, OUTPUT);
}

void loop() 
{
    digitalWrite(outPin, HIGH);
    delayMicroseconds(frequency);
    digitalWrite(outPin, LOW);
    delayMicroseconds(frequency);
}