#define trigPin 8
#define echoPin 9
#define Buzzer 13

void setup() {
Serial.begin (9600);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(Buzzer, OUTPUT);

}

void loop() {

digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

int duration = pulseIn(echoPin, HIGH);

int distance = (duration/2) / 29.1;

if (distance < 8)
{
digitalWrite(Buzzer,HIGH);

}
else {
digitalWrite(Buzzer,LOW);
}

if (distance >= 8)
{
  Serial.print(distance);
Serial.println(" cm");
Serial.println("Dustbin is still filling");
}
else {
Serial.print(distance);
Serial.println(" cm");
Serial.println("Dustbin is Full");
}
delay(500);
}


