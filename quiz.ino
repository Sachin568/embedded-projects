 int buttonPin1 = 1;     // number of pushbutton 1 pin
int buttonState1 = LOW;       // set the default variable value for pushbutton1 status
 int ledPin1 =  13;       // number of the LED 1 pin
 int buttonPin2 = 2;     // number of pushbutton 2 pin
int buttonState2 = LOW;       // set the default variable value for pushbutton2 status
 int ledPin2 =  10;       // number of the LED 2 pin
 int buttonPin3 = 3;     // number of pushbutton 3 pin
int buttonState3 = LOW;       // set the default variable value for pushbutton3 status
 int ledPin3 =  11;       // number of the LED 3 pin
 int buttonPin4 = 4;     // number of pushbutton 4 pin
int buttonState4 = LOW;       // set the default variable value for pushbutton4 status
 int ledPin4 =  12;       // number of the LED 4 pin


void setup() {                  // Set Pins to Outputs Or Inputs 
  pinMode(buttonPin1, INPUT);   // initialize the pushbutton pins as an inputs:
  pinMode(ledPin1, OUTPUT);     // initialize the LED pins as an outputs:
  pinMode(buttonPin2, INPUT);   // initialize the pushbutton pins as an inputs:
  pinMode(ledPin2, OUTPUT);     // initialize the LED pins as an outputs:
  pinMode(buttonPin3, INPUT);   // initialize the pushbutton pins as an inputs:
  pinMode(ledPin3, OUTPUT);     // initialize the LED pins as an outputs:
  pinMode(buttonPin4, INPUT);   // initialize the pushbutton pins as an inputs:
  pinMode(ledPin4, OUTPUT);     // initialize the LED pins as an outputs:
  Serial.begin(9600);   

}

void loop() {                  
 digitalWrite(ledPin1,LOW);
digitalWrite(ledPin2,LOW);
digitalWrite(ledPin3,LOW);
digitalWrite(ledPin4,LOW);// initialize serial communication at 9600 baud
  buttonState1 = digitalRead(buttonPin1);  // read current states of the pushbutton value:
  buttonState2 = digitalRead(buttonPin2);  // read current states of the pushbutton value:
  buttonState3 = digitalRead(buttonPin3);  // read current states of the pushbutton value:
  buttonState4 = digitalRead(buttonPin4);  // read current states of the pushbutton value:
 
// check if the pushbutton is pressed buttonState# == HIGH/LOW
  // if pressed change buttonState == HIGH to turn on ledPin# 
  // else if buttonState == LOW then digitalWrite(ledPin#, LOW) Keeps Led off.


if (buttonState1 == HIGH) {    //check buttonState
digitalWrite(ledPin1, HIGH);  //if HIGH turn LED on:
delay(5000);
digitalWrite(ledPin2,LOW);
digitalWrite(ledPin3,LOW);
digitalWrite(ledPin4,LOW);
} /*else {
digitalWrite(ledPin1, LOW);  */ // turn LED off:
delay(10);
Serial.println(buttonState1); //Print buttonState to serial
//}

if (buttonState2 == HIGH) {   //check buttonState
digitalWrite(ledPin2, HIGH);
delay(5000);
digitalWrite(ledPin3,LOW);
digitalWrite(ledPin4,LOW);
digitalWrite(ledPin1,LOW);//if HIGH turn LED on:
} /*else {
digitalWrite(ledPin2, LOW); */  // turn LED off:
delay(10);
Serial.println(buttonState2); //Print buttonState to serial
//}

if (buttonState3 == HIGH) {   //check buttonState
digitalWrite(ledPin3, HIGH);
delay(5000);
digitalWrite(ledPin1,LOW);
digitalWrite(ledPin2,LOW);
digitalWrite(ledPin4,LOW);//if HIGH turn LED on:
} /*else {
digitalWrite(ledPin3, LOW); */  // turn LED off:
delay(10);
Serial.println(buttonState3); //Print buttonState to serial
//}

if (buttonState4 == HIGH) {   //check buttonState
digitalWrite(ledPin4, HIGH);
delay(5000);
digitalWrite(ledPin3,LOW);
digitalWrite(ledPin1,LOW);
digitalWrite(ledPin2,LOW);//if HIGH turn LED on:
} /*else {
digitalWrite(ledPin1, LOW);   // turn LED off:
digitalWrite(ledPin2,LOW);
digitalWrite(ledPin3,LOW);
digitalWrite(ledPin4,LOW);*/
delay(10);
Serial.println(buttonState4); //Print buttonState to serial
//}
}
