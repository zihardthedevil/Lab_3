/*
 * fsm_automatic.c
 *
 *  Created on: Oct 26, 2024
 *      Author: Lie
 */
#include "fsm_automatic.h"

int LedRedTime = 5;
int LedYellowTime = 2;
int LedGreenTime = 3;
int Red_Time_Y = 0;
int Red_Time_X = 0;
int Green_Time_Y = 0;
int Green_Time_X = 0;
int Yellow_Time_Y = 0;
int Yellow_Time_X = 0;

void fsm_automatic_run() {
    switch (status) {
        case INIT:
            setTimer1(LedGreenTime * 1000);
            setTimer2(1000);
            status = AUTO_GREEN_Y;
            Green_Time_Y = LedGreenTime;
            Red_Time_X = LedRedTime;
            break;
        case AUTO_GREEN_Y:
        	HAL_GPIO_WritePin(LRY_GPIO_Port, LRY_Pin, GPIO_PIN_RESET);
        	HAL_GPIO_WritePin(LYY_GPIO_Port, LYY_Pin, GPIO_PIN_RESET);
        	HAL_GPIO_WritePin(LGY_GPIO_Port, LGY_Pin, GPIO_PIN_SET);
        	HAL_GPIO_WritePin(LRX_GPIO_Port, LRX_Pin, GPIO_PIN_SET);
        	HAL_GPIO_WritePin(LYX_GPIO_Port, LYX_Pin, GPIO_PIN_RESET);
        	HAL_GPIO_WritePin(LGX_GPIO_Port, LGX_Pin, GPIO_PIN_RESET);
        	updateRealTime(Green_Time_Y,Red_Time_X);
            if (timer2_flag == 1) {
                setTimer2(1000);
                updateRealTime(Green_Time_Y,Red_Time_X);
                Green_Time_Y--;
                Red_Time_X--;
            }
            led7_run();
            if (timer1_flag == 1) {
            	setTimer1(LedYellowTime * 1000);
                status = AUTO_YELLOW_Y;
                Yellow_Time_Y = LedYellowTime;
            }
            if (isButton1Pressed() == 1) {
            	status = MAN_RED;
            	SetRedTime = LedRedTime;
            	setTimer1(10000);
            }
            break;
        case AUTO_YELLOW_Y:
        	HAL_GPIO_WritePin(LRY_GPIO_Port, LRY_Pin, GPIO_PIN_RESET);
        	HAL_GPIO_WritePin(LYY_GPIO_Port, LYY_Pin, GPIO_PIN_SET);
        	HAL_GPIO_WritePin(LGY_GPIO_Port, LGY_Pin, GPIO_PIN_RESET);
        	HAL_GPIO_WritePin(LRX_GPIO_Port, LRX_Pin, GPIO_PIN_SET);
        	HAL_GPIO_WritePin(LYX_GPIO_Port, LYX_Pin, GPIO_PIN_RESET);
        	HAL_GPIO_WritePin(LGX_GPIO_Port, LGX_Pin, GPIO_PIN_RESET);
            updateRealTime(Yellow_Time_Y, Red_Time_X);
            if (timer2_flag == 1) {
                setTimer2(1000);
                updateRealTime(Yellow_Time_Y, Red_Time_X);
                Yellow_Time_Y--;
                Red_Time_X--;
            }
            led7_run();
            if (timer1_flag == 1) {
                setTimer1(LedGreenTime * 1000);
                Green_Time_X = LedGreenTime;
                Red_Time_Y = LedRedTime;
                status = AUTO_GREEN_X;
            }
            break;

        case AUTO_GREEN_X:
        	HAL_GPIO_WritePin(LRY_GPIO_Port, LRY_Pin, GPIO_PIN_SET);
        	HAL_GPIO_WritePin(LYY_GPIO_Port, LYY_Pin, GPIO_PIN_RESET);
        	HAL_GPIO_WritePin(LGY_GPIO_Port, LGY_Pin, GPIO_PIN_RESET);
        	HAL_GPIO_WritePin(LRX_GPIO_Port, LRX_Pin, GPIO_PIN_RESET);
        	HAL_GPIO_WritePin(LYX_GPIO_Port, LYX_Pin, GPIO_PIN_RESET);
        	HAL_GPIO_WritePin(LGX_GPIO_Port, LGX_Pin, GPIO_PIN_SET);
            updateRealTime(Red_Time_Y,Green_Time_X);
            if (timer2_flag == 1) {
                setTimer2(1000);
                updateRealTime(Red_Time_Y,Green_Time_X);
                Green_Time_X--;
                Red_Time_Y--;
            }
            led7_run();
            if (timer1_flag == 1) {
                setTimer1(LedYellowTime * 1000);
                Yellow_Time_X = LedYellowTime;
                status = AUTO_YELLOW_X;
            }
            break;

        case AUTO_YELLOW_X:
        	HAL_GPIO_WritePin(LRY_GPIO_Port, LRY_Pin, GPIO_PIN_SET);
        	HAL_GPIO_WritePin(LYY_GPIO_Port, LYY_Pin, GPIO_PIN_RESET);
        	HAL_GPIO_WritePin(LGY_GPIO_Port, LGY_Pin, GPIO_PIN_RESET);
        	HAL_GPIO_WritePin(LRX_GPIO_Port, LRX_Pin, GPIO_PIN_RESET);
        	HAL_GPIO_WritePin(LYX_GPIO_Port, LYX_Pin, GPIO_PIN_SET);
        	HAL_GPIO_WritePin(LGX_GPIO_Port, LGX_Pin, GPIO_PIN_RESET);
            updateRealTime(Red_Time_Y,Yellow_Time_X);
            if (timer2_flag == 1) {
                setTimer2(1000);
                updateRealTime(Red_Time_Y,Green_Time_X);
                Yellow_Time_X--;
                Red_Time_Y--;
            }
            led7_run();
            if (timer1_flag == 1) {
            	setTimer1(LedGreenTime * 1000);
                Green_Time_Y = LedGreenTime;
                Red_Time_X = LedRedTime;
                status = AUTO_GREEN_Y;
            }
            break;
    }
}

