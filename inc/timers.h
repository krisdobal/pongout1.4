
#ifndef _timers_H_
#define _timers_H_

typedef struct {
    int hours;
    int minutes;
    int seconds;
    int centiseconds;
    int flag;
} funTime_t;

volatile funTime_t t1;

void startTimer1(int f);
void stopTimer1(void);
void resetTimer1(void);
void setSplitTimeFromTimer1(funTime_t *split);

#endif /* _timers_H_ */
