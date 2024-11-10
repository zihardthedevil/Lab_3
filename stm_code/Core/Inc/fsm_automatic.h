/*
 * fsm_automatic.h
 *
 *  Created on: Oct 26, 2024
 *      Author: Lie
 */

#ifndef INC_FSM_AUTOMATIC_H_
#define INC_FSM_AUTOMATIC_H_

#include "global.h"
#include "software_timer.h"
#include "button.h"
#include "support_void.h"
#include "fsm_manual.h"
extern int LedRedTime;
extern int LedYellowTime;
extern int LedGreenTime;
extern int LedTime;
extern int Red_Time_X;
extern int Red_Time_Y;
extern int Green_Time_X;
extern int Green_Time_Y;
extern int Yellow_Time_X;
extern int Yellow_Time_Y;

void fsm_automatic_init ();
void fsm_automatic_run();

#endif /* INC_FSM_AUTOMATIC_H_ */
