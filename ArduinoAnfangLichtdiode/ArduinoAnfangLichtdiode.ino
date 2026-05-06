int Fotowiderstand = A0;
int LED = 12;
int SchwelleDunkelheit = 100;

void setup(){
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  int SensorWert = analogRead(Fotowiderstand);
  if (SensorWert < SchwelleDunkelheit){
    digitalWrite(LED, HIGH);  
  }
  else{  
    digitalWrite(LED, LOW);
  }
delay(100);
Serial.println(SensorWert);
}
