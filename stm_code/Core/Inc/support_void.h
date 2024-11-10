/*
 * support_void.h
 *
 *  Created on: Oct 27, 2024
 *      Author: Lie
 */

#ifndef INC_SUPPORT_VOID_H_
#define INC_SUPPORT_VOID_H_
#include"global.h"
#include"software_timer.h"
extern int LedTimeX;
extern int LedTimeY;
extern int led_buffer[4];

void updateRealTime();
void display7SEG();
void led_display();
void led7_run();
#endif /* INC_SUPPORT_VOID_H_ */
