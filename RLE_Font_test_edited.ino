/*
 Display all the fast rendering fonts.

 This sketch uses the GLCD (font 1) and fonts 2, 4, 6, 7, 8
 
 Make sure all the display driver and pin connections are correct by
 editing the User_Setup.h file in the TFT_eSPI library folder.

 #########################################################################
 ###### DON'T FORGET TO UPDATE THE User_Setup.h FILE IN THE LIBRARY ######
 #########################################################################
*/

// New background colour
#define BLUE TFT_eSPI().color565(0, 0, 225)
#define YELLOW TFT_eSPI().color565(224, 219, 114)
#define WHITE 0xFFFF
#define PINK TFT_eSPI().color565(255, 82, 252)


// Pause in milliseconds between screens, change to 0 to time font rendering
#define WAIT 500
#define HALT 1000

#include <TFT_eSPI.h> // Graphics and font library for ST7735 driver chip
#include <SPI.h>
#include <time.h>

TFT_eSPI tft = TFT_eSPI();  // Invoke library, pins defined in User_Setup.h

unsigned long targetTime = 0; // Used for testing draw times

void setup(void) {
  tft.init();
  tft.setRotation(1);
}

void loop() {
  targetTime = millis();

  // First we test them with a background colour set

  int primary[2] = {YELLOW, WHITE};
  int secondary[2] = {BLUE, PINK};

  int size = 4;

  int p_rando = primary[rand() % (1 + 1 - 0) + 0];
  int s_rando = secondary[rand() % (1 + 1 - 0) + 0];

  tft.fillScreen(p_rando);
  delay(HALT);
  
  tft.setTextColor(s_rando, p_rando);

  int width = 160;
  int height = 0;
  int time = rand() % (-120 + 1 - -160) + -160;
  int speed = rand() % (1 + 1 - 5) + 5;

  while(width > time){
   tft.drawString("Get Lucky. Go Easy. Get Lucky. Go Easy. Get Lucky. Go Easy. Get Lucky. Go Easy.", width+20, 0, 4);
   tft.drawString("Get Lucky. Go Easy. Get Lucky. Go Easy. Get Lucky. Go Easy. Get Lucky. Go Easy.", width+30, 30, 4);
   tft.drawString("Get Lucky. Go Easy. Get Lucky. Go Easy. Get Lucky. Go Easy. Get Lucky. Go Easy.", width+40, 60, 4);
   tft.drawString("Get Lucky. Go Easy. Get Lucky. Go Easy. Get Lucky. Go Easy. Get Lucky. Go Easy.", width+50, 90, 4);
   tft.drawString("Get Lucky. Go Easy. Get Lucky. Go Easy. Get Lucky. Go Easy. Get Lucky. Go Easy.", width+60, 120, 4);
   width -= speed;
//   delay(100);
  }

  delay(WAIT);

  tft.setTextColor(p_rando, s_rando);  
  tft.drawString("Get Lucky.", rand() % (160 + 1 - 0) + 0, rand() % (128 + 1 - 0) + 0, 4);
  delay(WAIT);
  tft.drawString("Go Easy.", rand() % (160 + 1 - 0) + 0, rand() % (128 + 1 - 0) + 0, 4);
  delay(WAIT);
  tft.drawString("Get Lucky.", rand() % (160 + 1 - 0) + 0, rand() % (128 + 1 - 0) + 0, 4);
  delay(WAIT);
  tft.drawString("Go Easy.", rand() % (160 + 1 - 0) + 0, rand() % (128 + 1 - 0) + 0, 4);
  delay(WAIT);
  tft.drawString("Get Lucky.", rand() % (160 + 1 - 0) + 0, rand() % (128 + 1 - 0) + 0, 4);
  delay(WAIT);
    tft.drawString("Go Easy.", rand() % (160 + 1 - 0) + 0, rand() % (128 + 1 - 0) + 0, 4);
  delay(WAIT);
  tft.drawString("Get Lucky.", rand() % (160 + 1 - 0) + 0, rand() % (128 + 1 - 0) + 0, 4);
  delay(WAIT);
  tft.drawString("Go Easy.", rand() % (160 + 1 - 0) + 0, rand() % (128 + 1 - 0) + 0, 4);
  delay(WAIT);
  tft.drawString("Get Lucky.", rand() % (160 + 1 - 0) + 0, rand() % (128 + 1 - 0) + 0, 4);
  delay(WAIT);
    tft.drawString("Go Easy.", rand() % (160 + 1 - 0) + 0, rand() % (128 + 1 - 0) + 0, 4);
  delay(WAIT);
  tft.drawString("Get Lucky.", rand() % (160 + 1 - 0) + 0, rand() % (128 + 1 - 0) + 0, 4);
  delay(WAIT);
  tft.drawString("Go Easy.", rand() % (160 + 1 - 0) + 0, rand() % (128 + 1 - 0) + 0, 4);
  delay(WAIT);
  tft.drawString("Get Lucky.", rand() % (160 + 1 - 0) + 0, rand() % (128 + 1 - 0) + 0, 4);
  delay(WAIT);
    tft.drawString("Go Easy.", rand() % (160 + 1 - 0) + 0, rand() % (128 + 1 - 0) + 0, 4);
  delay(WAIT);
  tft.drawString("Get Lucky.", rand() % (160 + 1 - 0) + 0, rand() % (128 + 1 - 0) + 0, 4);
  delay(WAIT);
  tft.drawString("Go Easy.", rand() % (160 + 1 - 0) + 0, rand() % (128 + 1 - 0) + 0, 4);
  delay(WAIT);
  tft.drawString("Get Lucky.", rand() % (160 + 1 - 0) + 0, rand() % (128 + 1 - 0) + 0, 4);
  delay(WAIT);
  delay(HALT);

  tft.fillScreen(s_rando);
  tft.setTextColor(p_rando, s_rando);
  
  tft.drawString("Get Lucky.", rand() % (160 + 1 - 0) + 0, rand() % (128 + 1 - 0) + 0, 4);
  tft.drawString("Go Easy.", rand() % (160 + 1 - 0) + 0, rand() % (128 + 1 - 0) + 0, 4);
  tft.drawString("Get Lucky.", rand() % (160 + 1 - 0) + 0, rand() % (128 + 1 - 0) + 0, 4);
  tft.drawString("Go Easy.", rand() % (160 + 1 - 0) + 0, rand() % (128 + 1 - 0) + 0, 4);
  tft.drawString("Get Lucky.", rand() % (160 + 1 - 0) + 0, rand() % (128 + 1 - 0) + 0, 4);
    tft.drawString("Go Easy.", rand() % (160 + 1 - 0) + 0, rand() % (128 + 1 - 0) + 0, 4);
  tft.drawString("Get Lucky.", rand() % (160 + 1 - 0) + 0, rand() % (128 + 1 - 0) + 0, 4);
  tft.drawString("Go Easy.", rand() % (160 + 1 - 0) + 0, rand() % (128 + 1 - 0) + 0, 4);
  tft.drawString("Get Lucky.", rand() % (160 + 1 - 0) + 0, rand() % (128 + 1 - 0) + 0, 4);
    tft.drawString("Go Easy.", rand() % (160 + 1 - 0) + 0, rand() % (128 + 1 - 0) + 0, 4);
  tft.drawString("Get Lucky.", rand() % (160 + 1 - 0) + 0, rand() % (128 + 1 - 0) + 0, 4);
  tft.drawString("Go Easy.", rand() % (160 + 1 - 0) + 0, rand() % (128 + 1 - 0) + 0, 4);
  tft.drawString("Get Lucky.", rand() % (160 + 1 - 0) + 0, rand() % (128 + 1 - 0) + 0, 4);
    tft.drawString("Go Easy.", rand() % (160 + 1 - 0) + 0, rand() % (128 + 1 - 0) + 0, 4);
  tft.drawString("Get Lucky.", rand() % (160 + 1 - 0) + 0, rand() % (128 + 1 - 0) + 0, 4);
  tft.drawString("Go Easy.", rand() % (160 + 1 - 0) + 0, rand() % (128 + 1 - 0) + 0, 4);
  tft.drawString("Get Lucky.", rand() % (160 + 1 - 0) + 0, rand() % (128 + 1 - 0) + 0, 4);
  delay(HALT);

  tft.fillScreen(p_rando);
  tft.setTextColor(s_rando, p_rando);
  
  tft.drawString("Get Lucky.", rand() % (160 + 1 - 0) + 0, rand() % (128 + 1 - 0) + 0, 4);
  tft.drawString("Go Easy.", rand() % (160 + 1 - 0) + 0, rand() % (128 + 1 - 0) + 0, 4);
  tft.drawString("Get Lucky.", rand() % (160 + 1 - 0) + 0, rand() % (128 + 1 - 0) + 0, 4);
  tft.drawString("Go Easy.", rand() % (160 + 1 - 0) + 0, rand() % (128 + 1 - 0) + 0, 4);
  tft.drawString("Get Lucky.", rand() % (160 + 1 - 0) + 0, rand() % (128 + 1 - 0) + 0, 4);
    tft.drawString("Go Easy.", rand() % (160 + 1 - 0) + 0, rand() % (128 + 1 - 0) + 0, 4);
  tft.drawString("Get Lucky.", rand() % (160 + 1 - 0) + 0, rand() % (128 + 1 - 0) + 0, 4);
  tft.drawString("Go Easy.", rand() % (160 + 1 - 0) + 0, rand() % (128 + 1 - 0) + 0, 4);
  tft.drawString("Get Lucky.", rand() % (160 + 1 - 0) + 0, rand() % (128 + 1 - 0) + 0, 4);
    tft.drawString("Go Easy.", rand() % (160 + 1 - 0) + 0, rand() % (128 + 1 - 0) + 0, 4);
  tft.drawString("Get Lucky.", rand() % (160 + 1 - 0) + 0, rand() % (128 + 1 - 0) + 0, 4);
  tft.drawString("Go Easy.", rand() % (160 + 1 - 0) + 0, rand() % (128 + 1 - 0) + 0, 4);
  tft.drawString("Get Lucky.", rand() % (160 + 1 - 0) + 0, rand() % (128 + 1 - 0) + 0, 4);
    tft.drawString("Go Easy.", rand() % (160 + 1 - 0) + 0, rand() % (128 + 1 - 0) + 0, 4);
  tft.drawString("Get Lucky.", rand() % (160 + 1 - 0) + 0, rand() % (128 + 1 - 0) + 0, 4);
  tft.drawString("Go Easy.", rand() % (160 + 1 - 0) + 0, rand() % (128 + 1 - 0) + 0, 4);
  tft.drawString("Get Lucky.", rand() % (160 + 1 - 0) + 0, rand() % (128 + 1 - 0) + 0, 4);
  delay(HALT);

  tft.fillScreen(s_rando);
  delay(WAIT);

}
