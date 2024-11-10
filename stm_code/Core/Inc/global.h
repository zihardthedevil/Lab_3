/*
 * global.h
 *
 *  Created on: Oct 26, 2024
 *      Author: Lie
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "software_timer.h"
#include "button.h"
#include "main.h"
#include "support_void.h"

#define INIT 1
#define AUTO_GREEN_Y 2  // Bắc-Nam xanh
#define AUTO_YELLOW_Y 3 // Bắc-Nam vàng
#define AUTO_GREEN_X 4  // Đông-Tây xanh
#define AUTO_YELLOW_X 5 // Đông-Tây vàng
#define MAN_RED 12
#define MAN_YELLOW 13
#define MAN_GREEN 14
#define SCAN_LED0 21
#define SCAN_LED1 22
#define SCAN_LED2 23
#define SCAN_LED3 24

extern int status;
extern int scanLEDState;

#endif /* INC_GLOBAL_H_ */
