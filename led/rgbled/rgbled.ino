int redPin = 2;
int greenPin = 3;
int bluePin = 4;
void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop()
{
  showPrimary();
}

void showPrimary()
{
  //red
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, LOW);
  delay(random(100,1000));
  //yellow
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, HIGH);
  digitalWrite(bluePin, LOW);
  delay(random(100,1000));
  //green
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, HIGH);
  digitalWrite(bluePin, LOW);
  delay(random(100,1000));
  //cyan
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, HIGH);
  digitalWrite(bluePin, HIGH);
  delay(random(100,1000));
  //blue
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, HIGH);
  delay(random(100,1000)); 
   //magenta
   digitalWrite(redPin,HIGH);
   digitalWrite(greenPin,LOW);
   digitalWrite(bluePin,HIGH);
   delay(random(100,1000));
   //white
   digitalWrite(redPin,HIGH);
   digitalWrite(greenPin,HIGH);
   digitalWrite(bluePin,HIGH);
   delay(random(1000));
}
