
#ifndef _timers_H_
#define _timers_H_

typedef struct {
    int flag;
} funTime_t;

volatile funTime_t t1;

void startTimer1(int f);
void stopTimer1(void);

#endif /* _timers_H_ */
