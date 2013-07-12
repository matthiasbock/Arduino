int pin[8] = {33,35,37,39,41,43,45,47};
int digit[10] = {B11111100, B01100000, B11011010, B11110010, B01100110, B10110110, B10111110, B11100000, B11111110, B11110110};

void setup(){
  for (int i=0; i<=7; i++) {
    pinMode(pin[i], OUTPUT);
    digitalWrite(pin[i], 1);
  }
}

void setDigit(int n) {
  int factor = 1;
  for (int i=0; i<=7; i++) {
    digitalWrite(pin[i], (digit[n] & factor) > 0);
    factor = factor << 1;
  }
}

void loop() {
  for (int i=0; i<10; i++) {
    setDigit(i);
    delay(500);
  }
}
