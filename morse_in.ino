static int MORSE_KEY = 2;
static int SOUND_OUT = 9;
static int LED = 13;

void setup() {
  Serial.begin(9600);
  pinMode(MORSE_KEY, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  int keyState = digitalRead(MORSE_KEY);
  if (keyState) {
    digitalWrite(LED, HIGH);
  }
  else {
    digitalWrite(LED, LOW);
  }
  Serial.println(keyState);
  delay(1);
}
