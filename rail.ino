#include <Servo.h> 
int servoPin = 3; 
int LED = 10; 
int obstaclePin = 5;  
int hasObstacle ;  
Servo Servo1;
void setup() {
 Servo1.attach(servoPin); 
  pinMode(obstaclePin, INPUT);
  Serial.begin(9600);  
}
void loop() {
  hasObstacle = digitalRead(obstaclePin); 
  if (hasObstacle == LOW) 
  {
    Serial.println("Danger");
    Servo1.write(0); 
   delay(5000); 
  }
  else
  {
    Serial.println("No Danger");
    Servo1.write(90); 
   delay(5000); 
  }

}
