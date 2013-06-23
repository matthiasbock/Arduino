int[6] DB = {0,1,2,3,4,5,6,7};
int RS = 8;
int RW = 9;
int E = 10;

// mode
int INSTRUCTION = 0;
int DATA = 1;

void setup() {
  pinMode(RS, OUTPUT);
  pinMode(RW, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(DB[0], OUTPUT);
  pinMode(DB[1], OUTPUT);
  pinMode(DB[2], OUTPUT);
  pinMode(DB[3], OUTPUT);
  pinMode(DB[4], OUTPUT);
  pinMode(DB[5], OUTPUT);
  pinMode(DB[6], OUTPUT);
  pinMode(DB[7], OUTPUT);
}

void mode(int m) {
  setPin(RS, m);
}

#include <LiquidCrystal.h>

LiquidCrystal lcd(2, 3, 4, 9, 10, 11, 12);

void setup(){
  lcd.print("hello, world!");
}
void loop() {}
