int trigPin = 11;
int echoPin = 12;
int stopLight = 5;
long duration, distance;

void setup() {
  Serial.begin(9600);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(stopLight, OUTPUT);

}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = (duration * 0.0343) /2;

  Serial.print(distance);
  Serial.print(" cm");
  Serial.println();

  if (distance <= 30 && distance >20){
    analogWrite(stopLight, 85);
  } else if (distance <= 20 && distance > 10){
    analogWrite(stopLight, 170);
  } else if (distance <= 10) {
    analogWrite(stopLight, 255);
  }
  else{
    digitalWrite(stopLight, LOW);
  }

  delay(1000);
}
