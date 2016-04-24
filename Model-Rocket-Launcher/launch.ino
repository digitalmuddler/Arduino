// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  //initialize the LCD
  lcd.begin(16, 2);

  //if power on/connection off/launch off
  lcd.print("System Standby");
  delay(5000); //this line goes away when igniter is connected
 
  //power on/igniter connected/launch off
  
  for (int i = 1; i < 10; i++) {
 
    lcd.begin(16,2);
    lcd.print("Launch Hold");
  
    for (int positionCounter = -1; positionCounter < 21; positionCounter++) {      
      lcd.setCursor(0,1);
      lcd.print("Final Launch Window Determination");
      delay(500);
      lcd.scrollDisplayLeft();
      
    }
    //delay(5000);
    lcd.begin(16,2);
    lcd.setCursor(0,1);
    lcd.print("Activate Flight Recorder");
    delay(5000);
    lcd.setCursor(0,1);
    lcd.print("Final \"go/no-go\" launch poll");
    delay(5000);
  }
    
  //if power on/connection on/launch off
  //lcd.print("Go for Launch");
  
  //if power on/connection on/launch on
  //lcd.print("Go for Launch");
  
  //lcd.setCursor(0,1);
  //lcd.print("Countdown:");
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  //lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  // lcd.print(millis() / 1000);  
}
