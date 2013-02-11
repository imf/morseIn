/*
  Morse Key LED and Tone Emitter
  
  Wiring:
    Connect morse key line in to GND.
    Connect morse key tel out to digital port 2 (MORSE_KEY)
    Connect speaker between ground and digital port 9 (SOUND_OUT)

*/

static int MORSE_KEY = 2;
static int SOUND_OUT = 9;
static int LED = 13;

static int FREQUENCY = 1000;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(MORSE_KEY, INPUT);
  digitalWrite(MORSE_KEY, HIGH); // Turn on the built-in pull-up resistor.
}

void loop() {
  int keyState = digitalRead(MORSE_KEY);
  if (! keyState) {
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
}
