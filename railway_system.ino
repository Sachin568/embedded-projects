#include <Servo.h> 
int obstaclePin = 5;  
int hasObstacle ;  
int servoPin = 3; 
Servo Servo1;
void setup() {
  pinMode(obstaclePin, INPUT);
  Serial.begin(9600);  
   Servo1.attach(servoPin); 
}
void loop() {
  hasObstacle = digitalRead(obstaclePin); 
  if (hasObstacle == LOW) 
  {
    Serial.println("Danger");
      Servo1.write(0); 
   delay(1000); 
  }
  else
  {
    Serial.println("Not danger");
  Servo1.write(90); 
   delay(1000); 
  }
  
}
