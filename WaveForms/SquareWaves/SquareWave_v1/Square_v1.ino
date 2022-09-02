//From 0hz to 500hz
#define inPin   A1
#define outPin  13

int    potVal;
int    freq;

void setup() 
{
  Serial.begin(9600);
  pinMode(inPin, INPUT);
  pinMode(outPin, OUTPUT);
}

void loop() 
{
  potVal = analogRead(inPin);
  Serial.println(potVal);
  freq = (500./1023.) * (potVal);
  tone(outPin, freq);
}