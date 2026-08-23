#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define BTN_PIN 2
#define BUZZER_PIN 8

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup(){
    pinMode(BTN_PIN, INPUT_PULLUP);
    pinMode(BUZZER_PIN, OUTPUT);
    
    lcd.init(); //lcd
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Press button to");
    lcd.setCursor(1, 1);
    lcd.print("roll the dice");
randomSeed(analogRead(0)); //seed random number generator
}

void loop(){
    if (digitalRead(BTN_PIN) == LOW) {
        int diceRoll = 1;

        lcd.clear();
        lcd.setCursor(3, 0);
        lcd.print("Rolling...");

        while (digitalRead(BTN_PIN) == LOW){
            diceRoll = random(1, 7); //generate random number between 1 and 6

            lcd.setCursor(7, 1);
            lcd.print(diceRoll);

            tone(BUZZER_PIN, random(800, 1600), 20);
            delay(60);
        }
lcd.clear();
lcd.setCursor(2, 0);
lcd.print("You rolled a");
lcd.setCursor(6, 1);
lcd.print(diceRoll);

tone(BUZZER_PIN, 1200, 80);
delay(100);
tone(BUZZER_PIN, 1800, 150);
delay(100);
    }
}