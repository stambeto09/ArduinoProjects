void setup() {
  int indexPIN = 0;

  for(indexPIN = 4; indexPIN <= 13; indexPIN++){
    pinMode(indexPIN, OUTPUT);
  }
}

void loop() {
  int leftStart = 8;
  int rightStart = 9;

  int index = 0;
  for(index = 0; index <= 5; index++){
    
    digitalWrite(leftStart + index, HIGH);
    digitalWrite(rightStart - index, HIGH);
    delay(50);
    digitalWrite(leftStart + index, LOW);
    digitalWrite(rightStart - index, LOW);  
  }
  
  for(index = 5; index >= 0; index--){
    
    digitalWrite(leftStart + index, HIGH);
    digitalWrite(rightStart - index, HIGH);
    delay(50);
    digitalWrite(leftStart + index, LOW);
    digitalWrite(rightStart - index, LOW);  
  }
  
}

