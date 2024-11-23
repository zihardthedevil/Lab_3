/*
 * fsm_maunual.c
 *
 *  Created on: Oct 26, 2024
 *      Author: Lie
 */
#include "fsm_manual.h"
int SetRedTime = 0;
int SetYellowTime = 0;
int SetGreenTime = 0;
void fsm_manual_run() {
	switch (status) {
	case MAN_RED:
		if (timer4_flag == 1) {
			setTimer4(250);
			HAL_GPIO_TogglePin(GPIOA, LRY_Pin|LRX_Pin);
		}
		HAL_GPIO_WritePin(GPIOA, LYY_Pin|LYX_Pin|LGY_Pin|LGX_Pin, GPIO_PIN_RESET);
		updateRealTime(SetRedTime,2);
		if (timer1_flag == 1) {
			status = AUTO_GREEN_Y;
			setTimer1(5000);
		}
		if (isButton1Pressed() == 1) {
			status = MAN_YELLOW;
			SetYellowTime = LedYellowTime;
			setTimer1(10000);
			setTimer4(250);
			HAL_GPIO_WritePin(GPIOA, LYY_Pin|LYX_Pin, GPIO_PIN_SET);
		}
		if (isButton2Pressed() == 1) {
			SetRedTime++;
			updateRealTime(SetRedTime,2);
		}
		led7_run();
		if (isButton3Pressed() == 1) {
			LedRedTime = SetRedTime;
			LedGreenTime = LedRedTime - LedYellowTime;
			status = AUTO_GREEN_Y;
			setTimer1(LedGreenTime * 1000);
			setTimer2(1000);
			status = AUTO_GREEN_Y;
			Green_Time_Y = LedGreenTime;
			Red_Time_X = LedRedTime;
		}
		break;
	case MAN_YELLOW:
		if (timer4_flag == 1) {
			setTimer4(250);
			HAL_GPIO_TogglePin(GPIOA, LYY_Pin|LYX_Pin);
		}
		HAL_GPIO_WritePin(GPIOA, LGY_Pin|LGX_Pin|LRY_Pin|LRX_Pin, GPIO_PIN_RESET);
		updateRealTime(SetYellowTime,3);
		if (timer1_flag == 1) {
			status = AUTO_GREEN_Y;
			setTimer1(5000);
		}
		if (isButton1Pressed() == 1) {
			status = MAN_GREEN;
			SetGreenTime = LedGreenTime;
			setTimer1(10000);
			setTimer4(250);
			HAL_GPIO_WritePin(GPIOA, LGY_Pin|LGX_Pin,GPIO_PIN_SET);
		}
		if (isButton2Pressed() == 1) {
			SetYellowTime++;
			updateRealTime(SetYellowTime,3);
		}
		led7_run();
		if (isButton3Pressed() == 1) {
			LedYellowTime = SetYellowTime;
			LedRedTime = LedGreenTime + LedYellowTime;
			status = AUTO_GREEN_Y;
			setTimer1(LedGreenTime * 1000);
			setTimer2(1000);
			status = AUTO_GREEN_Y;
			Green_Time_Y = LedGreenTime;
			Red_Time_X = LedRedTime;
		}
		break;
	case MAN_GREEN:
		if (timer4_flag == 1) {
			setTimer4(250);
			HAL_GPIO_TogglePin(GPIOA, LGY_Pin|LGX_Pin);
		}
		HAL_GPIO_WritePin(GPIOA, LRX_Pin|LRY_Pin|LYY_Pin|LYX_Pin, GPIO_PIN_RESET);
		updateRealTime(SetGreenTime,4);
		if (timer1_flag == 1) {
			status = AUTO_GREEN_Y;
			setTimer1(5000);
		}
		if (isButton1Pressed() == 1) {
			setTimer1(LedGreenTime * 1000);
			setTimer2(1000);
			status = AUTO_GREEN_Y;
			Green_Time_Y = LedGreenTime;
			Red_Time_X = LedRedTime;
		}
		if (isButton2Pressed() == 1) {
			SetGreenTime++;
			updateRealTime(SetGreenTime,4);
		}
		led7_run();
		if (isButton3Pressed() == 1) {
			LedGreenTime = SetGreenTime;
			LedYellowTime = SetYellowTime;
			LedRedTime = SetRedTime;
			if (LedRedTime > (LedYellowTime + LedGreenTime)) {
				LedGreenTime = LedRedTime - LedYellowTime;
			}
			if (LedRedTime < (LedYellowTime + LedGreenTime)) {
				LedRedTime = LedGreenTime + LedYellowTime;
			}
			status = AUTO_GREEN_Y;
			setTimer1(LedGreenTime * 1000);
			setTimer2(1000);
			status = AUTO_GREEN_Y;
			Green_Time_Y = LedGreenTime;
			Red_Time_X = LedRedTime;
		}
		break;
	default:
		break;
	}
}

