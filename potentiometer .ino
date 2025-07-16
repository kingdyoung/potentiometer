const int potPin = 25;
const int ledPin = 14;


void
setup() {
pinMode(ledPin, OUTPUT)  
Serial.begin(115200);
}

void
loop() {
int brightness = map(potValue, 0, 4095, 0, 1023);
int potValue = analogRead(potPin);

Serial.print("Potentiometer Value: ");
Serial.println(potValue);
delay(500);
}
