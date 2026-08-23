# Digital Dice with Arduino Uno R3

Let's build a Digital Dice with Arduino Uno R3! 

First, write the code and upload it. Second, build the circuit!

## Description
This project is a simple Digital Dice built with Arduino Uno R3, an LCD 16x2 (I2C), a push button, and a buzzer. When you press and hold the button, the system generates random numbers from 1 to 6 accompanied by sound effects. Releasing the button locks in your final dice roll.

## Components Needed
* Arduino Uno R3
* LCD 16x2 I2C Module
* Push Button
* Passive/Active Buzzer
* Breadboard and Jumper Wires

## Wiring Pinout
* LCD GND -> Arduino GND
* LCD VCC -> Arduino 5V
* LCD SDA -> Arduino Pin A4
* LCD SCL -> Arduino Pin A5
* Button -> Arduino Pin 2 and GND
* Buzzer -> Arduino Pin 8 (+) and GND (-)

## How It Works
1. Press and hold the push button to start rolling the dice.
2. The LCD display will randomize numbers from 1 to 6 with sound effects.
3. Release the button to lock your final result.
