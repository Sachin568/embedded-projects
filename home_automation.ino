int LED = 10; 
int obstaclePin = 7;  
int hasObstacle ;  
int led1 = 11;
int LDRpin = A0;
int LDRValue = 0; 
int val;
int tempPin = 6;

void setup() {
  pinMode(LED, OUTPUT);
   pinMode(led1,OUTPUT);
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

  LDRValue = analogRead(LDRpin); 
  Serial.println(LDRValue);
  if (LDRValue>100) 
  {digitalWrite(led1,HIGH);
  }
  else
  {
    digitalWrite(led1,LOW);
  } 
  
  val = analogRead(tempPin);
float mv = ( val/1024.0)*2000; 
float cel = mv/10;
float farh = (cel*9)/5 + 32;

Serial.print("TEMPRATURE = ");
Serial.print(cel);
Serial.print("*C");
Serial.println();
delay(1000);  
}
