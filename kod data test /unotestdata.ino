
const int kSerialInterval = 50;   
unsigned long serialPreviousTime; 

void setup() {
 
 Serial.begin(9600);

}

void loop() {
 
 //delay(50);

  // Enter into this only when serial interval has elapsed
  if((millis() - serialPreviousTime) > kSerialInterval) 
  {
    // Reset serial interval timestamp
    serialPreviousTime = millis(); 
    
  int dataVar = analogRead(35);
  Serial.print(dataVar);
  Serial.print(",");
  Serial.println();

  }

}
