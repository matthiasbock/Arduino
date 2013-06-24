int d[8] = {37,36,35,34,33,32,31,30};
int enable = 40;
int rw = 41;
int rs = 42;

//
// http://arduino.cc/de/Reference/LiquidCrystalConstructor
//

#include <LiquidCrystal.h>

LiquidCrystal lcd(rs, rw, enable, d[0], d[1], d[2], d[3], d[4], d[5], d[6], d[7]);

void setup(){
  pinMode(rs, OUTPUT);
  pinMode(rw, OUTPUT);
  pinMode(enable, OUTPUT);
  pinMode(d[0], OUTPUT);
  pinMode(d[1], OUTPUT);
  pinMode(d[2], OUTPUT);
  pinMode(d[3], OUTPUT);
  pinMode(d[4], OUTPUT);
  pinMode(d[5], OUTPUT);
  pinMode(d[6], OUTPUT);
  pinMode(d[7], OUTPUT);
  delay(1000);
  lcd.print("hello, world!");
}

void loop() {
}
