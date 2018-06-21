#define ESC 0x1B

#include "stm32f30x_conf.h" // STM32 config
#include "buffer.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void gotoxy(int x, int y) {
    //printf("%c[H",ESC);
    printf("%c[%d;%df", ESC, y, x);
}

//hide cursor
void hideCursor() {
    printf("%c[?25l",ESC);
}


void bufferToAnsi(){
    uint8_t c = 0xDB; //Filled square char.

    // scrstr is a string that comprises the entire graphics buffer as well as linebreak characters, as to render in PuTTY as efficiently as possible
    char scrstr[4128];
    int i, j;
    memset(scrstr, 0xFF, 4128);
    for(i = 0; i<32; i++){
        for(j = 0; j<128; j++){
            if(buffer[j + ((i >> 3) << 7)] & (0x01 << (i%8))) scrstr[j+i*129]=c;
        }
        scrstr[(i)*129+128] = 0x0A;
    }
    gotoxy(0,0);
    printf("%s",scrstr);
}
