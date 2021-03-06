
#include "stm32f30x_conf.h"
#include "30010_io.h"
#include "inGame.h"
#include "lookup.h"
#include "PhysicsEngine.h"
#include "ansi.h"
#include "joystick.h"
#include "potmeter.h"
#include "timers.h"
#include "levels.h"

#include <string.h>
#include "lcd.h"

void TIM2_IRQHandler(void) { // interrupt code
    t1.flag = 1;
    TIM2->SR &= ~0x0001; // Clear interrupt bit
}

void loadLevel(uint8_t * levelSelect_p, uint32_t * bricks_p, uint32_t * specialBricks_p){
    int i;

    switch(* levelSelect_p){
        case 1 :
            for(i=0;i<8;i++){
                bricks_p[i] = level1[i];
                specialBricks_p[i] = special1[i];
            }
            break;
        case 2 :
            for(i=0;i<8;i++){
                bricks_p[i] = level2[i];
                specialBricks_p[i] = special2[i];
            }
            break;
        case 3 :
            for(i=0;i<8;i++){
                bricks_p[i] = level3[i];
                specialBricks_p[i] = special3[i];
            }
            break;
        default :
            for(i=0;i<8;i++){
                bricks_p[i] = defaultLevel[i];
                specialBricks_p[i] = defaultSpecial[i];
            }

    }
}

int startGame(uint8_t chosenLevel, uint8_t chosenSpeed){
    startTimer1(1500);
    initPots();

    //Initialize game variables
    // 18.14 values
    uint32_t striker0 = 0;
    uint32_t striker1 = 0;
    //arrays
    uint8_t activeBalls = 0x00;
    ball_t balls[8];
    uint32_t bricks[8];
    uint32_t specialBricks[8];

    //game statistics
    uint16_t score = 0x0000;
    uint8_t lives = 0x33;
    int gameStats = 0;

    //timing variables
    int renderCount = 0;
    int lcdRenderCount = 0;
    int physicsCount = 0;
    uint8_t i;

    // striker initial position
    updateStrikers(&striker0, &striker1);
    loadLevel(&chosenLevel, bricks, specialBricks);//0: default

    //Initiate the first ball
    newBall(&balls[0],&activeBalls,&striker0);

    hideCursor();
    lcdCleanScreen();

    while(1) {
        // Check if the timer has had an interrupt since last call
        if(t1.flag){
            physicsCount++;
            lcdRenderCount++;
            renderCount++;
            t1.flag = 0;
        }

        // Prioritezed single function update
        if(lcdRenderCount > 50){
            lcdCleanScreen();
            lcdRenderGame(balls, &activeBalls, &striker0, &striker1, bricks, specialBricks, &lives, &score); //, specialBricks
            lcd_push_buffer();
            lcdRenderCount = 0;
            if(renderCount > 200){
                bufferToAnsi();
                renderCount = 0;
            }
        }else if(physicsCount > 10-(chosenSpeed*3)){
            updatePhysics(balls, &activeBalls, &striker0, &striker1, &lives, &score, bricks, specialBricks);
            physicsCount = 0;
        }
        // Termination of the game
        // checks if any brick are still active, continues if not
        for(i=0; i<8; i++){
            if(bricks[i] != 0){
                break;
            }
        }
        if(i == 8 && chosenLevel){ // if all bricks are gone and we are not in level0
            gameStats += score << 16;
            gameStats += (0x0001 << 0); // game outcome - all bricks destroyed, winner determined on score
            if(score)
            return gameStats;
        }
        if((lives & 0x0F) == 0x00){
            gameStats += score << 16;
            gameStats += (0x0000 << 0); // game outcome based on lives
            gameStats += (0x0001 << 1); // Player 1 has won
            return gameStats;
        } else if((lives & 0xF0) == 0x00){
            gameStats += score << 16;
            gameStats += (0x0000 << 0); // game outcome based on lives
            gameStats += (0x0000 << 1); // Player 0 has won
            return gameStats;
        }
    }
}

