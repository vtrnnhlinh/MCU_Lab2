/*
 * software_timer.h
 *
 *  Created on: Sep 25, 2022
 *      Author: Minh Duc Quach
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer_flag_7SEG;
extern int timer_flag_DOT;
extern int timer0_flag;
void setTimer7SEG(int duration);
void setTimerDOT(int duration);
void timer_run();
void setTimer0();

extern int timer1_flag;
void timer1_run();
void setTimer1();
#endif /* INC_SOFTWARE_TIMER_H_ */
