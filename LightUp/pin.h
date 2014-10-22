/* Helpful constants for buttons  */
#define PRESSED 0
#define UNPRESSED 1

/* Helpful names for output pins */
void on(int pin) {
  digitalWrite(pin, HIGH);
}

void off(int pin) {
  digitalWrite(pin, LOW);
}

void onOff(int pin) {
  on(pin);
  delay(500);
  off(pin); 
}

void allOn() {
  on(OUTPUT_1);
  on(OUTPUT_2);
  on(OUTPUT_3);
  on(OUTPUT_4);
  on(OUTPUT_5);
  on(OUTPUT_6);
}

void allOff() {
  on(OUTPUT_1);
  on(OUTPUT_2);
  on(OUTPUT_3);
  on(OUTPUT_4);
  on(OUTPUT_5);
  on(OUTPUT_6);
}
