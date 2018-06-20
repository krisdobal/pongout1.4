#include "stm32f30x_conf.h" // STM32 config
#include "30010_io.h" // Input/output library for this course
#include "timers.h"


void startTimer1(int f) { // Initiation and starting the timer,  f - Frequency
    int reloadValue = 64*1000000/f;
    RCC->APB1ENR |= RCC_APB1Periph_TIM2; // Enable clock line to timer 2;
    TIM2->CR1 = 0x01; // Configure timer 2
    TIM2->ARR = reloadValue; // Set reload value
    TIM2->PSC = 0x00; // Set prescale value
    TIM2->DIER |= 0x0001; // Enable timer 2 interrupts
    NVIC_SetPriority(TIM2_IRQn, 2); // Set interrupt priority
    NVIC_EnableIRQ(TIM2_IRQn); // Enable interrupt
}

void stopTimer1(void) { // Pauses the timer
    TIM2->CR1 = 0x00;
}

void resetTimer1(void){
    t1.centiseconds = 0;
    t1.seconds = 0;
    t1.minutes = 0;
    t1.hours = 0;
}

void setSplitTimeFromTimer1(funTime_t *split){
    split->centiseconds = t1.centiseconds;
    split->seconds = t1.seconds;
    split->minutes = t1.minutes;
    split->hours = t1.hours;
}



