int ledPin[] = {1,2,3,4,5,6,7,8,9,10};
int potPin = A0;
void setup()
{
  for (int i =0;i<10;i++)
  {
    pinMode(ledPin[i], OUTPUT);
  }
}

void loop() 
{
fromPot();
}

void alloff()
{
  for (int i =0;i<10;i++)
  {
    digitalWrite(ledPin[i], LOW);
  } 
}

void allon()
{
  for (int i =0;i<10;i++)
  {
    digitalWrite(ledPin[i], HIGH);
  } 
}

void showUpTo(byte numtoshow)
{
  alloff();
  for (byte i = 0;i<numtoshow;i++)
  {
    digitalWrite(ledPin[i],HIGH);
  } 

}
void fromPot()
{
  int potvalue = analogRead(potPin);
  byte show = map(potvalue,0, 1023, 0,10);
  showUpTo(show);
}

void upanddown()
{
  for (int i =0;i<10;i++)
  {
    digitalWrite(ledPin[i], HIGH);
    delay(100);
  }
  for (int i=9;i>=0;i--)
  {
    digitalWrite(ledPin[i], LOW);
    delay(100);
  }
}
void oneatatime()
{
  for (int i =0;i<10;i++)
  {
    digitalWrite(ledPin[i], HIGH);
    delay(100);
    digitalWrite(ledPin[i], LOW);
    delay(100);
  }  
}
