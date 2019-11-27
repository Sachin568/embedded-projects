int led = 9;
int s = 2;
int a;
void setup() {
pinMode(led,OUTPUT);  // put your setup code here, to run once:
pinMode(s,INPUT);
}

void loop() {
 a=digitalRead(s);
 if(a==1)
 {
 digitalWrite(led,HIGH);
 }else
 {
 digitalWrite(led,LOW);// put your main code here, to run repeatedly:

}
}
