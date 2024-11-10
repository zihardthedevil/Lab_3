/*
 * fsm_manual.h
 *
 *  Created on: Oct 26, 2024
 *      Author: Lie
 */

#ifndef INC_FSM_MANUAL_H_
#define INC_FSM_MANUAL_H_

#include "global.h"
#include "software_timer.h"
#include "button.h"
#include "support_void.h"
#include "fsm_automatic.h"
extern int SetRedTime;
extern int SetYellowTime;
extern int SetGreenTime;
void fsm_manual_run();



#endif /* INC_FSM_MANUAL_H_ */
