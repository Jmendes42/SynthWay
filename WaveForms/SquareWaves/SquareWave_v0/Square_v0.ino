#define outPin 5

byte    amp = 1000;
byte    timeGap = 1000;

void setup() 
{
  pinMode(outPin, OUTPUT);
}

void loop() 
{
    digitalWrite(outPin, HIGH);
    delayMicroseconds(amp);
    digitalWrite(outPin, LOW);
    delayMicroseconds(timeGap);
}