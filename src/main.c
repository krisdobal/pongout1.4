#include "stm32f30x_conf.h"
#include "30010_io.h"
#include "PhysicsEngine.h"
#include "inGame.h"
#include "ansi.h"
#include "joystick.h"
//#include "charset.h"
//#include <string.h>
#include "lcd.h"
//#include "lookup.h"
//#include "led.h"
//#include "potmeter.h"
//#include "timers.h"
//#include "levels.h"



void menu(char * opt0, char * opt1, char * opt2, char * opt3, uint8_t * option_p);
void startScreen();
void helpScreen();
void endScreen(uint32_t gameStats);



int main(void) {
  //Initializing hardware
  init_usb_uart(921600);
  init_spi_lcd();
  initializeJoystick();
  initializeJoystickIRQ();

  //Show fancy start screen
  //startScreen();

  //Initializing game variables
  uint8_t level = 0;
  uint8_t speed = 0;

  char * mainOption0 = "change level";
  char * mainOption1 = "change speed";
  char * mainOption2 = "help";
  char * mainOption3 = "PLAY";

  char * levelOption0 = "Pong";
  char * levelOption1 = "Vanilla";
  char * levelOption2 = "rainbow Road";
  char * levelOption3 = "HELL";

  char * speedOption0 = "mindful";
  char * speedOption1 = "medium raw";
  char * speedOption2 = "speedy gonzales";
  char * speedOption3 = "warp speed";


  while(1) {
      //Show main menu
       uint8_t nextAction = 0;
      menu(mainOption0, mainOption1, mainOption2, mainOption3, &nextAction);

      switch (nextAction) {
          case 0 :
              menu(levelOption0, levelOption1, levelOption2, levelOption3, &level);
              break;
          case 1 :
              menu(speedOption0, speedOption1, speedOption2, speedOption3, &speed);
              break;
          case 2 :
              helpScreen();
              break;
          case 3 :
              endScreen(startGame(level, speed));
              break;
      }
  }
}

void menu(char * opt0, char * opt1, char * opt2, char * opt3, uint8_t * option_p) {

    uint8_t pressed = 1;
    uint8_t stillDeciding = 1;
    uint8_t joystick = 0x00;

    lcdCleanScreen();

    lcdRenderString(0, 0, opt0);
    lcdRenderString(0, 1, opt1);
    lcdRenderString(0, 2, opt2);
    lcdRenderString(0, 3, opt3);
    lcdRenderArrow(*option_p);
    lcd_push_buffer();
    bufferToAnsi();

    while(stillDeciding) {
        joystick = readJoystick();
        if (!pressed) {
            if (joystick & 0x01 << 1) {
                *option_p = (*option_p + 1) % 4;
                pressed = 1;
                lcdRenderArrow(*option_p);
                lcd_push_buffer();
                bufferToAnsi();
            }
            else if(joystick & 0x01 << 0) {
                *option_p = (*option_p + 3) % 4;
                pressed = 1;
                lcdRenderArrow(*option_p);
                lcd_push_buffer();
                bufferToAnsi();
            }
            else if(joystick & (0x01 << 3)) {
                stillDeciding = 0;
                pressed = 1;
            }
        }
        else if (!(joystick & 0x0F)) {
            pressed = 0;
        }
    }
}

void helpScreen() {
    lcdCleanScreen();
    lcdRenderHelpScreen();
    lcd_push_buffer();
    bufferToAnsi();
    while((readJoystick() & 0x01 << 3)) {}
    while(!(readJoystick() & 0x01 << 3)) {}
}

void endScreen(uint32_t gameStats) {
    lcdCleanScreen();
    lcdRenderString(20, 1, "...and the winner is:");
    if (gameStats & 0x02) {
        lcdRenderString(20, 2, "Player 1");
    }
    else {
        lcdRenderString(25, 2, "Player 0");
    }
    lcd_push_buffer(buffer);
    bufferToAnsi();
    while(1){
        if (readJoystick() & (0x01 << 3)) {
            return;
        }
    }

}

