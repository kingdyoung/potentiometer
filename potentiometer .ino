const int potPin = 25;
const int ledPin = 14;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  int potValue = analogRead(potPin);
  int brightness = map(potValue, 0, 4095, 0, 255);
  analogWrite(ledPin, brightness);

  Serial.print("Potentiometer Value: ");
  Serial.println(potValue);
  delay(500);
}
