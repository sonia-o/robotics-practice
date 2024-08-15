void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  turnOn();

  delay(3000);

  turnOff();

  delay(3000);
}

void turnOn(){
  for (int i = 0; i < 255; i++) {
    analogWrite(3, i);
    delay(50);
  }
}

void turnOff(){
  for (int i = 255; i > 0; i--) {
    analogWrite(3, i);
    delay(50);
  }
}