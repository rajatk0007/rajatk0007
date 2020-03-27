const int trigPin = 9;
const int echoPin = 10;

long duration;
int distance;


void setup() {
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
Serial.begin(9600); 
}

void loop() {
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin,HIGH);
  delayMicroseconds(5);
  digitalWrite(trigPin,LOW);

  duration = pulseIn(echoPin,HIGH);
  distance=0.0343*duration/2;

  Serial.print("Distance:");
  Serial.println(distance);

}
