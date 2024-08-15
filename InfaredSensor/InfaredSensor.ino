int inPin = 4;
int ledPin = 3;
long obstacle = 0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(inPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly: 
  obstacle = digitalRead(inPin);
  // Serial.print(obstacle);
  if (obstacle == HIGH){
    digitalWrite(ledPin, HIGH);
  } else{
    digitalWrite(ledPin, LOW);
  }
  delay(500);
}
