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
		HAL_GPIO_WritePin(LRY_GPIO_Port, LRY_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LYY_GPIO_Port, LYY_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LGY_GPIO_Port, LGY_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LRX_GPIO_Port, LRX_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LYX_GPIO_Port, LYX_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LGX_GPIO_Port, LGX_Pin, GPIO_PIN_RESET);
		updateRealTime(SetRedTime,SetRedTime);
		if (timer1_flag == 1) {
			status = AUTO_GREEN_Y;
			setTimer1(5000);
		}
		if (isButton1Pressed() == 1) {
			status = MAN_YELLOW;
			SetYellowTime = LedYellowTime;
			setTimer1(10000);
		}
		if (isButton2Pressed() == 1) {
			SetRedTime++;
			updateRealTime(SetRedTime,SetRedTime);
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
		HAL_GPIO_WritePin(LRY_GPIO_Port, LRY_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LYY_GPIO_Port, LYY_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LGY_GPIO_Port, LGY_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LRX_GPIO_Port, LRX_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LYX_GPIO_Port, LYX_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LGX_GPIO_Port, LGX_Pin, GPIO_PIN_RESET);
		updateRealTime(SetYellowTime,SetYellowTime);
		if (timer1_flag == 1) {
			status = AUTO_GREEN_Y;
			setTimer1(5000);
		}
		if (isButton1Pressed() == 1) {
			status = MAN_GREEN;
			SetGreenTime = LedGreenTime;
			setTimer1(10000);
		}
		if (isButton2Pressed() == 1) {
			SetYellowTime++;
			updateRealTime(SetYellowTime,SetYellowTime);
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
		HAL_GPIO_WritePin(LRY_GPIO_Port, LRY_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LYY_GPIO_Port, LYY_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LGY_GPIO_Port, LGY_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LRX_GPIO_Port, LRX_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LYX_GPIO_Port, LYX_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LGX_GPIO_Port, LGX_Pin, GPIO_PIN_SET);
		updateRealTime(SetGreenTime,SetGreenTime);
		if (timer1_flag == 1) {
			status = AUTO_GREEN_Y;
			setTimer1(5000);
		}
		if (isButton2Pressed() == 1) {
			SetGreenTime++;
			updateRealTime(SetGreenTime,SetGreenTime);
		}
		led7_run();
		if (isButton3Pressed() == 1) {
			LedGreenTime = SetGreenTime;
			LedRedTime = LedGreenTime + LedYellowTime;
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

