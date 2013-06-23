int DB[8] = {45,43,41,39,37,35};
int RS = 33;
int RW = 31;
int E = 29;

#include <LiquidCrystal.h>

LiquidCrystal lcd(RS, RW, E, DB[4], DB[5], DB[6], DB[7]);

void setup(){
  lcd.print("hello, world!");
}
void loop() {
  lcd.print("hello, world!");
}
