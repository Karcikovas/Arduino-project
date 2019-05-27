#define trigPin 7
#define echoPin 6
int RedLed=8;
int YellowLed=9;
int GreenLed=10;
int BlueLed=13;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(RedLed, OUTPUT);
  pinMode(YellowLed, OUTPUT);
  pinMode(GreenLed, OUTPUT);
  pinMode(BlueLed, OUTPUT);
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

  int distance;
  
  distance = ((340 * duration)/20000);
  
  Serial.println(duration);

  switch(distance){
   case (distance <= 5):
      digitalWrite(RedLed, HIGH);
      break;
   case (distance > 5 && distance <10):
      digitalWrite(YellowLed, HIGH);
      break;
   case (distance > 10 && disntace <20):
      digitalWrite(GreenLed, HIGH);
      break;
   case (distance >20):
      digitalWrite(BlueLed, HIGH);
      break;
   default:
      Serial.println("ITS WRONG");
    break;
  }


