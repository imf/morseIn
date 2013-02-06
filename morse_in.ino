static int MORSE_KEY = 2;
static int SOUND_OUT = 9;
static int LED = 13;

static int FREQUENCY = 1000;

void setup() {
//  Serial.begin(9600);
  pinMode(MORSE_KEY, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  int keyState = digitalRead(MORSE_KEY);
  if (keyState) {
    digitalWrite(LED, HIGH);
    digitalWrite(SOUND_OUT, HIGH);
    delayMicroseconds(FREQUENCY / 2);
    digitalWrite(SOUND_OUT, LOW);
    delayMicroseconds(FREQUENCY / 2);
  }
  else {
    digitalWrite(LED, LOW);
    delay(1);
  }
//  Serial.println(keyState);
}
