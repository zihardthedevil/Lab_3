/*
 * button.h
 *
 *  Created on: Oct 25, 2024
 *      Author: Lie
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

extern int isButton1Pressed();
extern int isButton2Pressed();
extern int isButton3Pressed();

void getKeyInput();

#endif /* INC_BUTTON_H_ */
