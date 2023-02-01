/* 
 * File:   SS2NG_Joystick_const.h
 * Author: takashi.terauchi
 *
 * Created on 2020/07/19, 22:10
 */

#ifndef SS2NG_JOYSTICK_CONST_H
#define	SS2NG_JOYSTICK_CONST_H


enum INT_STARTAPP {
    RUN = 0x00,
    STAY = 0x01,
};

enum SS_SEL { 
    AB_00 = 0x00,
    AB_10 = 0x02,
    AB_01 = 0x01,
    AB_11 = 0x03,
};

//intrrupt_StartApplication
extern enum INT_STARTAPP STATE_STARTAPP;

//SS SelSignal
extern enum SS_SEL STATE_SS_SEL;

#endif	/* SS2NG_JOYSTICK_CONST_H */

