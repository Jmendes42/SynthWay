#define outPin 5

byte    freq = 2000;

void setup() 
{
  pinMode(outPin, OUTPUT);
}

void loop() 
{
    digitalWrite(outPin, HIGH);
    delayMicroseconds(freq);
    digitalWrite(outPin, LOW);
    delayMicroseconds(freq);
}