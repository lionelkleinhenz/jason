void setup() {
  pinMode(9, OUTPUT);
}

void loop() {
  int lichtWert = analogRead(A0);
  int stromStaerke = 255 - (int) ((255.0 / 1023.0) * lichtWert);
  stromStaerke = constrain(stromStaerke, 0, 255);
  analogWrite(9, stromStaerke);
  delay(100);
}