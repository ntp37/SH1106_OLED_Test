#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SH110X.h>

#define i2c_Address 0x3c        //initialize with the I2C addr 0x3C Typically eBay OLED's
//#define i2c_Address 0x3d      //initialize with the I2C addr 0x3D Typically Adafruit OLED's

#define SCREEN_WIDTH 128        //OLED display width, in pixels
#define SCREEN_HEIGHT 64        //OLED display height, in pixels
#define OLED_RESET -1           //QT-PY / XIAO
Adafruit_SH1106G display = Adafruit_SH1106G(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() {
  display.begin(i2c_Address, true);                 //Set the OLED address to 0x3c
  display.clearDisplay();                           //Clear screen

  display.setTextSize(1);                           //Set text size for display
  display.setTextColor(SH110X_WHITE);
  display.setCursor(0,0);                           //Set position X,Y for display
  display.println("    OLED 1.30 TEST  ");          //OLED 1.30 TEST

  display.setCursor(0,16);
  display.setTextSize(1);
  display.setTextColor(SH110X_BLACK, SH110X_WHITE); //Set black background & white font
  display.println("     Hello World     ");         //Display Hello World

  display.setCursor(0,32);
  display.setTextSize(1);
  display.setTextColor(SH110X_WHITE);
  display.println(" 128 x 64 Pixel 1.30 ");         //Display "128 x 64 Pixel 1.30"

  display.setCursor(0,48);
  display.setTextSize(1);
  display.setTextColor(SH110X_WHITE);
  display.println("     SH116 Driver   ");          //Display "SH116 Driver"
  display.display();
}

void loop() {
  
}
