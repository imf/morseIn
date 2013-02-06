static int MORSE_KEY = 2;
static int SOUND_OUT = 9;
static int LED = 13;

void setup() {
//  Serial.begin(9600);
  pinMode(MORSE_KEY, INPUT);
}

void loop() {
  int keyState = digitalRead(MORSE_KEY);
  Serial.println(keyState);
  delay(100);
}
