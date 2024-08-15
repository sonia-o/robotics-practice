#define S0 3
#define S1 4
#define S2 5
#define S3 6
#define sensorOut 7

int blueValue = 0;

void setup() {
  //Setting the outputs
  pinMode(S0, OUTPUT);
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);

  //Setting the sensorOut as an input
  pinMode(sensorOut, INPUT);

  //Setting frequency scaling to 2%
  digitalWrite(S0, LOW);
  digitalWrite(S1, HIGH);

  //Begins serial communication
  Serial.begin(9600);
}

void loop() {
  //Setting BLUE (B) filtered photodiodes to be read
  digitalWrite(S2, LOW);
  digitalWrite(S3, HIGH);

  //Reading the output frequency
  blueValue = pulseIn(sensorOut, LOW);

  //Printing the BLUE (B) value
  Serial.print(" Blue = ");
  Serial.println(blueValue);
  delay(1000);
}
