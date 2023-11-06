
#define sensorVar A0
#define sensorLDR A1
#define sensorLM35 A2

int dataVar;
int dataLDR;
int dataLM35;

const int masaInterval = 500;   
unsigned long masaSebelum; 

void setup() {
 
 Serial.begin(9600);

}

void loop() {
 
 //delay(50);

  // Enter into this only when serial interval has elapsed
  if((millis() - masaSebelum) > masaInterval) 
  {
    // Reset serial interval timestamp
    masaSebelum = millis(); 
    
   dataVar = analogRead(sensorVar);
   dataLDR = analogRead(sensorLDR);
   dataLM35 = analogRead(sensorLM35);


  Serial.print(dataVar);
  Serial.print(",");
  Serial.print(dataLDR);
  Serial.print(",");
  Serial.print(dataLM35);
  Serial.println();

  }

}
