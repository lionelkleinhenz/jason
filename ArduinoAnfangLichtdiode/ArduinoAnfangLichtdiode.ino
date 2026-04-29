void setup() {
  pinMode(9, OUTPUT);
}
void loop() {
  int lichtWert = analogRead(A0);
  int stromStaerke = map(lichtWert, 0, 1023, 255, 0);
  delay(100);
  serial.println(stromStaerke)
}
