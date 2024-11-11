void setup()  { 
  // declare pin 10 to be an output:
  pinMode(6, OUTPUT);
  beep(50);
  beep(50);
  beep(50);
  delay(1000);
} 

void loop()  { 
  beep(200); 
}

void beep(unsigned char delayms){
  analogWrite(6, 20);      // Almost any value can be used except 0 and 255
                           // experiment to get the best tone
  delay(500);              // wait for 500 ms
  analogWrite(6, 0);       // 0 turns it off
  delay(500);              // wait for 500 ms   
}  
