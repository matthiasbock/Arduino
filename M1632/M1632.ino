int DB[8] = {0,1,2,3,4,5,6,7};
int RS = 8;
int RW = 9;
int E = 10;

#include <LiquidCrystal.h>

LiquidCrystal lcd(RS, RW, E, DB[4], DB[5], DB[6], DB[7]);

void setup(){
  lcd.print("hello, world!");
}
void loop() {
}
