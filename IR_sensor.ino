int LED = 10; 
int obstaclePin = 5;  
int hasObstacle ;  

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(obstaclePin, INPUT);
  Serial.begin(9600);  
}
void loop() {
  hasObstacle = digitalRead(obstaclePin); 
  if (hasObstacle == LOW) 
  {
    Serial.println("Danger");
    digitalWrite(LED, HIGH);
  }
  else
  {
    Serial.println("No Danger");
    digitalWrite(LED, LOW);
  }
  delay(200);
}
