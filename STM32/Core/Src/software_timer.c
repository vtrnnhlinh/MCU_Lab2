/*
 * software_timer.c
 *
 *  Created on: Sep 25, 2022
 *      Author: Minh Duc Quach
 */

#include "software_timer.h"

int timer_flag_7SEG = 0;
int timer_flag_DOT = 0;
int timer_counter_7SEG = 0;
int timer_counter_DOT = 0;

void setTimer7SEG(int duration){
	timer_counter_7SEG = duration;
	timer_flag_7SEG = 0;
}

void setTimerDOT(int duration){
	timer_counter_DOT = duration;
	timer_flag_DOT = 0;
}

void timerRun(){
	if (timer_counter_7SEG > 0){
		timer_counter_7SEG--;
		if (timer_counter_7SEG <= 0){
			timer_flag_7SEG = 1;
		}
	}
	if (timer_counter_DOT > 0){
		timer_counter_DOT--;
		if (timer_counter_DOT <= 0){
			timer_flag_DOT = 1;
		}
	}
}
