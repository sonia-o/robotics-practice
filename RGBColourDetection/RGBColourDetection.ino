#define S0 3
#define S1 4
#define S2 5
#define S3 6
#define sensorOut 7

int redValue = 0;
int greenValue = 0;
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
  //Reading the RED value first
  //Setting RED (R) filtered photodiodes to be read
  digitalWrite(S2, LOW);
  digitalWrite(S3, LOW);

  //Reading the output frequency
  redValue = pulseIn(sensorOut, LOW);

  //Printing the BLUE (B) value
  Serial.print("R = ");
  Serial.print(redValue);
  delay(1000);



  //Reading the GREEN value next
  //Setting GREEN (G) filtered photodiodes to be read
  digitalWrite(S2, HIGH);
  digitalWrite(S3, HIGH);

  //Reading the output frequency
  greenValue = pulseIn(sensorOut, LOW);

  //Printing the BLUE (B) value
  Serial.print("   G = ");
  Serial.print(greenValue);
  delay(1000);



  //Reading the BLUE value last
  //Setting BLUE (B) filtered photodiodes to be read
  digitalWrite(S2, LOW);
  digitalWrite(S3, HIGH);

  //Reading the output frequency
  blueValue = pulseIn(sensorOut, LOW);

  //Printing the BLUE (B) value
  Serial.print("   B = ");
  Serial.println(blueValue);
  delay(1000);
}
