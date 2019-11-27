#define NUMB_OF_PRESET          10       /* Available preset                 */
#define NUMB_OF_SEGMENTS         7       /* Available segments               */

#define MAX_NUMB                 9       /* High counting range limit        */

int LDRpin = A0;
int LDRpin2 = A1;
int LDRValue1 = 0; 
int LDRValue2 = 0;   
#define DISP_PIN_0              7        /* digital pin input for segment A  */
#define DISP_PIN_1              6        /* digital pin input for segment B  */
#define DISP_PIN_2              4        /* digital pin input for segment C  */
#define DISP_PIN_3              2        /* digital pin input for segment D  */
#define DISP_PIN_4              1        /* digital pin input for segment E  */
#define DISP_PIN_5              9        /* digital pin input for segment F  */
#define DISP_PIN_6              10   
#define disp/* digital pin input for segment G  */
const byte displaySEG[NUMB_OF_PRESET][NUMB_OF_SEGMENTS] = {
        /*  A     B     C     D     E     F     G            */
        { HIGH, HIGH, HIGH, HIGH, HIGH, HIGH,  LOW }, /*  0  */
        {  LOW, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW }, /*  1  */
        { HIGH, HIGH,  LOW, HIGH, HIGH,  LOW, HIGH }, /*  2  */
        { HIGH, HIGH, HIGH, HIGH,  LOW,  LOW, HIGH }, /*  3  */
        {  LOW, HIGH, HIGH,  LOW,  LOW, HIGH, HIGH }, /*  4  */
        { HIGH,  LOW, HIGH, HIGH,  LOW, HIGH, HIGH }, /*  5  */
        { HIGH,  LOW, HIGH, HIGH, HIGH, HIGH, HIGH }, /*  6  */
        { HIGH, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW }, /*  7  */
        { HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH }, /*  8  */
        { HIGH, HIGH, HIGH, HIGH,  LOW, HIGH, HIGH }, /*  9  */
};
int counter = 0;
int i = 0;
void setDisplayValue(int n) {
  for(i = 0; i < NUMB_OF_SEGMENTS; i++){
    digitalWrite(DISP_PIN_0 + i, displaySEG[n % 10][i]);
  }
}
#define initDisplay()     setDisplayValue(0)
void increaseAndDisplay() {
  counter++;
  if(counter > MAX_NUMB) {
    counter = 1;
    
  }
  setDisplayValue(counter);
}
void decreaseAndDisplay() {
  if(counter) {
    counter--;
    setDisplayValue(counter);
  
  }
}
void setup() {
  Serial.begin(9600); 

   for(i = 0; i < NUMB_OF_SEGMENTS; i++){
    pinMode(DISP_PIN_0 + i, OUTPUT);
  } 
  initDisplay();
}

void loop() {
   
  LDRValue1 = analogRead(LDRpin); 
  LDRValue2 = analogRead(LDRpin2);
//  Serial.println(LDRValue);
  if (LDRValue1 <50) 
  {increaseAndDisplay();
   //Serial.println(LDRValue1);
   Serial.println(counter);
    delay(500);
  }
  if(LDRValue2 <50)
  {
    decreaseAndDisplay();
     //Serial.println(LDRValue2);
     Serial.println(counter);
    delay(500);
  } 
  delay(100);   
  }
                    
  
