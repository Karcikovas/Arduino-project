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
  
  distance = ((340 * duration)/20000);
  
  Serial.println(duration);
  
  if (distance <= 5){
      digitalWrite(RedLed, HIGH);
      digitalWrite(YellowLed, LOW);
      digitalWrite(GreenLed, LOW);
      digitalWrite(BlueLed, LOW);
  } 
  else if (distance > 5 && distance <10){
      digitalWrite(RedLed, LOW);
      digitalWrite(YellowLed, HIGH);
      digitalWrite(GreenLed, LOW);
      digitalWrite(BlueLed, LOW);
  }
  else if (distance > 10 && distance <20) {
      digitalWrite(RedLed, LOW);
      digitalWrite(YellowLed, LOW);
      digitalWrite(GreenLed, HIGH);
      digitalWrite(BlueLed, LOW);      
  }else if ( distance > 20 ){
      digitalWrite(RedLed, LOW);
      digitalWrite(YellowLed, LOW);
      digitalWrite(GreenLed, LOW);
      digitalWrite(BlueLed, HIGH); 
  } else {
      Serial.println("ITS WRONG");
  }
}


