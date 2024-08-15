int enA = 3;
int in1 = 4;
int in2 = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);

  for (int i = 0; i < 255; i++){
    analogWrite(enA, i);
    delay(20);
  }

  delay(1000);

  for (int i = 255; i > 0; i--){
    analogWrite(enA, i);
    delay(20);
  }

  delay(3000);

  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);

  for (int i = 0; i < 255; i++){
    analogWrite(enA, i);
    delay(20);
  }

  delay(1000);

  for (int i = 255; i > 0; i--){
    analogWrite(enA, i);
    delay(20);
  }

  delay(3000);
}
