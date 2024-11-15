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

void setTimer7SEG(int duration);
void setTimerDOT(int duration);
void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
