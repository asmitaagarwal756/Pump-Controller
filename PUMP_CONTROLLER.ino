int lowSensor = 2;
int highSensor = 3;
int relayPin = 8;

void setup() {
pinMode(lowSensor, INPUT_PULLUP);
pinMode(highSensor, INPUT_PULLUP);
pinMode(relayPin, OUTPUT);
digitalWrite(relayPin, LOW);
}

void loop() {
bool lowLevel = digitalRead(lowSensor);
bool highLevel = digitalRead(highSensor);

if (lowLevel == HIGH && highLevel == HIGH) {
digitalWrite(relayPin, HIGH);  // Turn ON pump
}

if (highLevel == LOW) {
digitalWrite(relayPin, LOW);
}
delay(500);
}