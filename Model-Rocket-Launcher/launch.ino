// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// initialize LEDs
int LED_AuxPower = TBD;       // pin # TBD
int LED_SafetyEngaged = TBD;  // pin # TBD
int LED_SafetyEngaged = TBD;  // pin # TBD
//int LED???
int LED_IgnitionArmed = TBD;  // pin # TBD
//int LED???
int LED_ReadyForLaunch = TBD; // pin # TBD
//int LED???
int LED_LiftOff = TBD;        // pin # TBD
int LED_Prelaunch = TBD;      // pin # TBD
int LED_Launch = TBD;         // pin # TBD

void setup() {
  //initialize the LCD
  lcd.begin(16, 2);

  //initialize digital pins on the Arduino as output
  pinMode(LED_AuxPower, OUTPUT);
  pinMode(LED_SafetyEngaged, OUTPUT);  
  pinMode(LED_SafetyEngaged, OUTPUT);
  //pinMode(  ?????
  pinMode(LED_IgnitionArmed, OUTPUT);
  //int LED???
  pinMode(LED_ReadyForLaunch, OUTPUT);
  //int LED???
  pinMode(LED_LiftOff, OUTPUT);
  pinMode(LED_Prelaunch, OUTPUT);
  pinMode(LED_Launch, OUTPUT);
}

void loop() {
  digitalWrite(LED_AuxPower, HIGH);     // turns on LED
  
  //if power on/connection off/launch off
  lcd.print("System Standby");
  lcd.setCursor("Review Safety");
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
