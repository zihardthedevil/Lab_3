/*
 * support_void.c
 *
 *  Created on: Oct 27, 2024
 *      Author: Lie
 */
#include "support_void.h"
int led_buffer[4] = {1,2,3,4};
void display7SEG(int num){
switch (num) {
	case 0:
		HAL_GPIO_WritePin(GPIOB,SEG0_Pin,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB,SEG1_Pin,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB,SEG2_Pin,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB,SEG3_Pin,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB,SEG4_Pin,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB,SEG5_Pin,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB,SEG6_Pin,GPIO_PIN_SET);
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOB,SEG0_Pin,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB,SEG1_Pin,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB,SEG2_Pin,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB,SEG3_Pin,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB,SEG4_Pin,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB,SEG5_Pin,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB,SEG6_Pin,GPIO_PIN_SET);
		break;
	case 2:
		HAL_GPIO_WritePin(GPIOB,SEG0_Pin,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB,SEG1_Pin,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB,SEG2_Pin,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB,SEG3_Pin,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB,SEG4_Pin,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB,SEG5_Pin,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB,SEG6_Pin,GPIO_PIN_RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(GPIOB,SEG0_Pin,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB,SEG1_Pin,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB,SEG2_Pin,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB,SEG3_Pin,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB,SEG4_Pin,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB,SEG5_Pin,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB,SEG6_Pin,GPIO_PIN_RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(GPIOB,SEG0_Pin,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB,SEG1_Pin,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB,SEG2_Pin,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB,SEG3_Pin,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB,SEG4_Pin,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB,SEG5_Pin,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB,SEG6_Pin,GPIO_PIN_RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(GPIOB,SEG0_Pin,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB,SEG1_Pin,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB,SEG2_Pin,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB,SEG3_Pin,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB,SEG4_Pin,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB,SEG5_Pin,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB,SEG6_Pin,GPIO_PIN_RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(GPIOB,SEG0_Pin,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB,SEG1_Pin,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB,SEG2_Pin,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB,SEG3_Pin,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB,SEG4_Pin,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB,SEG5_Pin,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB,SEG6_Pin,GPIO_PIN_RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(GPIOB,SEG0_Pin,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB,SEG1_Pin,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB,SEG2_Pin,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB,SEG3_Pin,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB,SEG4_Pin,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB,SEG5_Pin,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB,SEG6_Pin,GPIO_PIN_SET);
		break;
	case 8:
		HAL_GPIO_WritePin(GPIOB,SEG0_Pin,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB,SEG1_Pin,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB,SEG2_Pin,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB,SEG3_Pin,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB,SEG4_Pin,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB,SEG5_Pin,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB,SEG6_Pin,GPIO_PIN_RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(GPIOB,SEG0_Pin,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB,SEG1_Pin,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB,SEG2_Pin,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB,SEG3_Pin,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB,SEG4_Pin,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB,SEG5_Pin,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB,SEG6_Pin,GPIO_PIN_RESET);
		break;
	default:
		HAL_GPIO_WritePin(GPIOB,SEG0_Pin,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB,SEG1_Pin,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB,SEG2_Pin,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB,SEG3_Pin,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB,SEG4_Pin,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB,SEG5_Pin,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB,SEG6_Pin,GPIO_PIN_SET);
		break;
	}
}
void updateRealTime(int num1,int num2) {
	led_buffer[0] = num1 / 10;
	led_buffer[1] = num1 % 10;
	led_buffer[2] = num2 / 10;
    led_buffer[3] = num2 % 10;
}
void led_display() {
        switch(scanLEDState) {
            case 1:
                HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_SET);
                HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_SET);
                HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_SET);
                HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_RESET);
                display7SEG(led_buffer[0]);
                scanLEDState = 2;
                break;
            case 2:
                HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_SET);
                HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_SET);
                HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_SET);
                HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_RESET);
                display7SEG(led_buffer[1]);
                scanLEDState = 3;
                break;
            case 3:
                HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_SET);
                HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_SET);
                HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_SET);
                HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_RESET);
                display7SEG(led_buffer[2]);
                scanLEDState = 4;
                break;
            case 4:
                HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_SET);
                HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_SET);
                HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_SET);
                HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_RESET);
                display7SEG(led_buffer[3]);
                scanLEDState = 1;
                break;
            default:
            	scanLEDState = 1;
      }
}
void led7_run(){
	if (timer3_flag == 1) {
		setTimer3(125);
		led_display();
	}
}
