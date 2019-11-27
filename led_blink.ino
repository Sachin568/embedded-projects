int led = 8;
int led1 = 9;
int led2 = 10;
int led3 = 7;
int led4 = 6;

void setup() {
  
  pinMode(led, OUTPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
}


void loop() {
  digitalWrite(led, HIGH);   
  delay(100);                       
  digitalWrite(led, LOW);    
  delay(100); 
  digitalWrite(led1, HIGH);   
  delay(100);                       
  digitalWrite(led1, LOW);    
  delay(100);
  digitalWrite(led2, HIGH);   
  delay(100);                       
  digitalWrite(led2, LOW);    
  delay(100); 
  digitalWrite(led3, HIGH);   
  delay(100);                       
  digitalWrite(led3, LOW);    
  delay(100);        
  digitalWrite(led4, HIGH);   
  delay(100);                       
  digitalWrite(led4, LOW);    
  delay(100);             
}
