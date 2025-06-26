// Including the required Arduino libraries
#include <MD_Parola.h>
#include <MD_MAX72xx.h>
#include <SPI.h>
#define HARDWARE_TYPE MD_MAX72XX::FC16_HW
// Defining size, and output pins
10
#define MAX_DEVICES 4#define CLK_PIN 13
#define DATA_PIN 11
#define CS_PIN 10
// Create a new instance of the MD_Parola class with
hardware SPI connection
MD_Parola myDisplay = MD_Parola(HARDWARE_TYPE,
CS_PIN, MAX_DEVICES);
void setup() {
 // Intialize the object
11
 myDisplay.begin();
 // Set the intensity (brightness) of the display (0-15)
 myDisplay.setIntensity(0);
 // Clear the display
 myDisplay.displayClear(); myDisplay.displayText("Dr.V.P.Jayachitra", PA_CENTER, 90,
200, PA_SCROLL_LEFT , PA_SCROLL_LEFT );
}
12
void loop() {
 if (myDisplay.displayAnimate()) {
 myDisplay.displayReset();
 }
}