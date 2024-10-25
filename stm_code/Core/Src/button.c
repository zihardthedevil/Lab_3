/*
 * button.c
 *
 *  Created on: Oct 25, 2024
 *      Author: Lie
 */
#include "button.h"

int BUT1_flag = 0;
int BUT2_flag = 0;
int BUT3_flag = 0;

int KeyReg0_1 = NORMAL_STATE;
int KeyReg1_1 = NORMAL_STATE;
int KeyReg2_1 = NORMAL_STATE;
int KeyReg3_1 = NORMAL_STATE;
int TimerForKeyPress1 = 200;

int KeyReg0_2 = NORMAL_STATE;
int KeyReg1_2 = NORMAL_STATE;
int KeyReg2_2 = NORMAL_STATE;
int KeyReg3_2 = NORMAL_STATE;
int TimerForKeyPress2 = 200;

int KeyReg0_3 = NORMAL_STATE;
int KeyReg1_3 = NORMAL_STATE;
int KeyReg2_3 = NORMAL_STATE;
int KeyReg3_3 = NORMAL_STATE;
int TimerForKeyPress3 = 200;

void subKeyProcess(int buttonNumber) {
    switch(buttonNumber) {
        case 1:
            BUT1_flag = 1;
            break;
        case 2:
            BUT2_flag = 1;
            break;
        case 3:
            BUT3_flag = 1;
            break;
    }
}

int isButton1Pressed() {
    if(BUT1_flag == 1) {
        BUT1_flag = 0;
        return 1;
    }
    return 0;
}

int isButton2Pressed() {
    if(BUT2_flag == 1) {
        BUT2_flag = 0;
        return 1;
    }
    return 0;
}

int isButton3Pressed() {
    if(BUT3_flag == 1) {
        BUT3_flag = 0;
        return 1;
    }
    return 0;
}

void getKeyInput1() {
    KeyReg0_1 = KeyReg1_1;
    KeyReg1_1 = KeyReg2_1;
    KeyReg2_1 = HAL_GPIO_ReadPin(GPIOA, BUT1_Pin);

    if ((KeyReg0_1 == KeyReg1_1) && (KeyReg1_1 == KeyReg2_1)) {
        if (KeyReg3_1 != KeyReg2_1) {
            KeyReg3_1 = KeyReg2_1;
            if (KeyReg2_1 == PRESSED_STATE) {
                subKeyProcess(1);
                TimerForKeyPress1 = 200;
            }
        } else {
            TimerForKeyPress1--;
            if (TimerForKeyPress1 == 0) {
                if (KeyReg2_1 == PRESSED_STATE) {
                    subKeyProcess(1);
                }
                TimerForKeyPress1 = 200;
            }
        }
    }
}

void getKeyInput2() {
    KeyReg0_2 = KeyReg1_2;
    KeyReg1_2 = KeyReg2_2;
    KeyReg2_2 = HAL_GPIO_ReadPin(GPIOA, BUT2_Pin);

    if ((KeyReg0_2 == KeyReg1_2) && (KeyReg1_2 == KeyReg2_2)) {
        if (KeyReg3_2 != KeyReg2_2) {
            KeyReg3_2 = KeyReg2_2;
            if (KeyReg2_2 == PRESSED_STATE) {
                subKeyProcess(2);
                TimerForKeyPress2 = 200;
            }
        } else {
            TimerForKeyPress2--;
            if (TimerForKeyPress2 == 0) {
                if (KeyReg2_2 == PRESSED_STATE) {
                    subKeyProcess(2);
                }
                TimerForKeyPress2 = 200;
            }
        }
    }
}

void getKeyInput3() {
    KeyReg0_3 = KeyReg1_3;
    KeyReg1_3 = KeyReg2_3;
    KeyReg2_3 = HAL_GPIO_ReadPin(GPIOA, BUT3_Pin);

    if ((KeyReg0_3 == KeyReg1_3) && (KeyReg1_3 == KeyReg2_3)) {
        if (KeyReg3_3 != KeyReg2_3) {
            KeyReg3_3 = KeyReg2_3;
            if (KeyReg2_3 == PRESSED_STATE) {
                subKeyProcess(3);
                TimerForKeyPress3 = 200;
            }
        } else {
            TimerForKeyPress3--;
            if (TimerForKeyPress3 == 0) {
                if (KeyReg2_3 == PRESSED_STATE) {
                    subKeyProcess(3);
                }
                TimerForKeyPress3 = 200;
            }
        }
    }
}

void getKeyInput() {
    getKeyInput1();
    getKeyInput2();
    getKeyInput3();
}
