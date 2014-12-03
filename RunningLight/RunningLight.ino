void setup() {
  int indexPIN = 0;
  
  for(indexPIN = 4; indexPIN <= 13; indexPIN++){
    pinMode(indexPIN, OUTPUT);
  }
}

void loop() {
  int index = 0;

  for(index = 4; index <= 13; index++){
    Blink(index);
  }

  for(index = 13; index >= 4; index--){
    Blink(index);
  }
  
}

void Blink(int index){
  digitalWrite(index, HIGH);
  delay(25);
  digitalWrite(index, LOW);
}

