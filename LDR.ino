int led = 11;
int LDRpin = A0;
int LDRValue = 0;    

void setup() {
  Serial.begin(9600); 
  pinMode(led,OUTPUT);
}

void loop() {
  LDRValue = analogRead(LDRpin); 
  Serial.println(LDRValue);
  if (LDRValue>100) 
  {digitalWrite(led,HIGH);
  }
  else
  {
    digitalWrite(led,LOW);
  }    
  }
                    
  
