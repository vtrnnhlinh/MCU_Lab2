/*
 * software_timer.c
 *
 *  Created on: Sep 25, 2022
 *      Author: Minh Duc Quach
 */

#include "software_timer.h"

int timer_flag = 0;
int timer_counter = 0;

void setTimer(int duration){
	timer_counter = duration;
	timer_flag = 0;
}

void timerRun(){
	if (timer_counter > 0){
		timer_counter--;
		if (timer_counter <= 0){
			timer_flag = 1;
		}
	}
}
