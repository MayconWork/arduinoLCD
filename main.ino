#include <LiquidCrystal.h>

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

int numRows = 2;
int numCols = 16;

void setup() {
  lcd.begin(numCols, numRows);
  lcd.clear();
}

void loop() {
  lcd.setCursor(0, 0);
  lcd.print("Arduino");
  delay(1000);
  lcd.clear();
  lcd.setCursor(0, 1);
  lcd.print("Rules");
  delay(1000);
  lcd.clear();
}
