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
