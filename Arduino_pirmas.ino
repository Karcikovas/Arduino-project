#define trigPin 7
#define echoPin 6

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}
void loop(){
  long duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(2);
  digitalWrite(trigPin, LOW);
  duration= pulseIn(echoPin, HIGH);
  distance = (3.4 * duration)*200;
  Serial.println(duration);
  delay(500);
}

