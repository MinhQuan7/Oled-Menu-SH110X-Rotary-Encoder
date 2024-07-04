#ifndef MENU_H
#define MENU_H

#include <Adafruit_SSD1306.h>

extern Adafruit_SSD1306 display;

void displayMenu();
void rotary_loop();
void displaySubMenu();
void check_SubMenu();
void onButtonLongPress();
void onButtonShortPress();
void adjust_Brightness();
void setup_encoder();
void handle_rotary_button() ;
void graphic_weatherSystem();
void graphic_eyeRobot();
void graphic_Brightness ();
void graphic_languages() ;
void graphic_information();

#endif
