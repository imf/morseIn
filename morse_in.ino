/*
  Morse Key LED and Tone Emitter
  
  Wiring:
    Connect morse key line in to 5V out.
    Connect morse key tel out to digital port 2 (MORSE_KEY)
    Connect 10KΩ resistor between digital port 2 and ground
    Connect speaker between ground and digital port 9 (SOUND_OUT)

*/

static int MORSE_KEY = 2;
static int SOUND_OUT = 9;
static int LED = 13;

static int FREQUENCY = 1000;

void setup() {
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
}
