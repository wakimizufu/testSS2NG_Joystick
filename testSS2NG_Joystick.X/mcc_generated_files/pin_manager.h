/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.4
        Device            :  PIC18F47Q10
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.20 and above
        MPLAB 	          :  MPLAB X 5.40	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_UP aliases
#define IO_UP_TRIS                 TRISBbits.TRISB0
#define IO_UP_LAT                  LATBbits.LATB0
#define IO_UP_PORT                 PORTBbits.RB0
#define IO_UP_WPU                  WPUBbits.WPUB0
#define IO_UP_OD                   ODCONBbits.ODCB0
#define IO_UP_ANS                  ANSELBbits.ANSELB0
#define IO_UP_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define IO_UP_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define IO_UP_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define IO_UP_GetValue()           PORTBbits.RB0
#define IO_UP_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define IO_UP_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define IO_UP_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define IO_UP_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define IO_UP_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define IO_UP_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define IO_UP_SetAnalogMode()      do { ANSELBbits.ANSELB0 = 1; } while(0)
#define IO_UP_SetDigitalMode()     do { ANSELBbits.ANSELB0 = 0; } while(0)

// get/set IO_DOWN aliases
#define IO_DOWN_TRIS                 TRISBbits.TRISB1
#define IO_DOWN_LAT                  LATBbits.LATB1
#define IO_DOWN_PORT                 PORTBbits.RB1
#define IO_DOWN_WPU                  WPUBbits.WPUB1
#define IO_DOWN_OD                   ODCONBbits.ODCB1
#define IO_DOWN_ANS                  ANSELBbits.ANSELB1
#define IO_DOWN_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define IO_DOWN_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define IO_DOWN_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define IO_DOWN_GetValue()           PORTBbits.RB1
#define IO_DOWN_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define IO_DOWN_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define IO_DOWN_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define IO_DOWN_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define IO_DOWN_SetPushPull()        do { ODCONBbits.ODCB1 = 0; } while(0)
#define IO_DOWN_SetOpenDrain()       do { ODCONBbits.ODCB1 = 1; } while(0)
#define IO_DOWN_SetAnalogMode()      do { ANSELBbits.ANSELB1 = 1; } while(0)
#define IO_DOWN_SetDigitalMode()     do { ANSELBbits.ANSELB1 = 0; } while(0)

// get/set IO_LEFT aliases
#define IO_LEFT_TRIS                 TRISBbits.TRISB2
#define IO_LEFT_LAT                  LATBbits.LATB2
#define IO_LEFT_PORT                 PORTBbits.RB2
#define IO_LEFT_WPU                  WPUBbits.WPUB2
#define IO_LEFT_OD                   ODCONBbits.ODCB2
#define IO_LEFT_ANS                  ANSELBbits.ANSELB2
#define IO_LEFT_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define IO_LEFT_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define IO_LEFT_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define IO_LEFT_GetValue()           PORTBbits.RB2
#define IO_LEFT_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define IO_LEFT_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define IO_LEFT_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define IO_LEFT_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define IO_LEFT_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define IO_LEFT_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define IO_LEFT_SetAnalogMode()      do { ANSELBbits.ANSELB2 = 1; } while(0)
#define IO_LEFT_SetDigitalMode()     do { ANSELBbits.ANSELB2 = 0; } while(0)

// get/set IO_RIGHT aliases
#define IO_RIGHT_TRIS                 TRISBbits.TRISB3
#define IO_RIGHT_LAT                  LATBbits.LATB3
#define IO_RIGHT_PORT                 PORTBbits.RB3
#define IO_RIGHT_WPU                  WPUBbits.WPUB3
#define IO_RIGHT_OD                   ODCONBbits.ODCB3
#define IO_RIGHT_ANS                  ANSELBbits.ANSELB3
#define IO_RIGHT_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define IO_RIGHT_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define IO_RIGHT_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define IO_RIGHT_GetValue()           PORTBbits.RB3
#define IO_RIGHT_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define IO_RIGHT_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define IO_RIGHT_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define IO_RIGHT_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define IO_RIGHT_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define IO_RIGHT_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define IO_RIGHT_SetAnalogMode()      do { ANSELBbits.ANSELB3 = 1; } while(0)
#define IO_RIGHT_SetDigitalMode()     do { ANSELBbits.ANSELB3 = 0; } while(0)

// get/set IO_A aliases
#define IO_A_TRIS                 TRISBbits.TRISB4
#define IO_A_LAT                  LATBbits.LATB4
#define IO_A_PORT                 PORTBbits.RB4
#define IO_A_WPU                  WPUBbits.WPUB4
#define IO_A_OD                   ODCONBbits.ODCB4
#define IO_A_ANS                  ANSELBbits.ANSELB4
#define IO_A_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define IO_A_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define IO_A_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define IO_A_GetValue()           PORTBbits.RB4
#define IO_A_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define IO_A_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define IO_A_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define IO_A_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define IO_A_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define IO_A_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define IO_A_SetAnalogMode()      do { ANSELBbits.ANSELB4 = 1; } while(0)
#define IO_A_SetDigitalMode()     do { ANSELBbits.ANSELB4 = 0; } while(0)

// get/set IO_B aliases
#define IO_B_TRIS                 TRISCbits.TRISC0
#define IO_B_LAT                  LATCbits.LATC0
#define IO_B_PORT                 PORTCbits.RC0
#define IO_B_WPU                  WPUCbits.WPUC0
#define IO_B_OD                   ODCONCbits.ODCC0
#define IO_B_ANS                  ANSELCbits.ANSELC0
#define IO_B_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define IO_B_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define IO_B_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define IO_B_GetValue()           PORTCbits.RC0
#define IO_B_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define IO_B_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define IO_B_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define IO_B_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define IO_B_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define IO_B_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define IO_B_SetAnalogMode()      do { ANSELCbits.ANSELC0 = 1; } while(0)
#define IO_B_SetDigitalMode()     do { ANSELCbits.ANSELC0 = 0; } while(0)

// get/set IO_C aliases
#define IO_C_TRIS                 TRISCbits.TRISC1
#define IO_C_LAT                  LATCbits.LATC1
#define IO_C_PORT                 PORTCbits.RC1
#define IO_C_WPU                  WPUCbits.WPUC1
#define IO_C_OD                   ODCONCbits.ODCC1
#define IO_C_ANS                  ANSELCbits.ANSELC1
#define IO_C_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define IO_C_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define IO_C_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define IO_C_GetValue()           PORTCbits.RC1
#define IO_C_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define IO_C_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define IO_C_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define IO_C_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define IO_C_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define IO_C_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define IO_C_SetAnalogMode()      do { ANSELCbits.ANSELC1 = 1; } while(0)
#define IO_C_SetDigitalMode()     do { ANSELCbits.ANSELC1 = 0; } while(0)

// get/set IO_X aliases
#define IO_X_TRIS                 TRISCbits.TRISC2
#define IO_X_LAT                  LATCbits.LATC2
#define IO_X_PORT                 PORTCbits.RC2
#define IO_X_WPU                  WPUCbits.WPUC2
#define IO_X_OD                   ODCONCbits.ODCC2
#define IO_X_ANS                  ANSELCbits.ANSELC2
#define IO_X_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define IO_X_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define IO_X_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define IO_X_GetValue()           PORTCbits.RC2
#define IO_X_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define IO_X_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define IO_X_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define IO_X_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define IO_X_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define IO_X_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define IO_X_SetAnalogMode()      do { ANSELCbits.ANSELC2 = 1; } while(0)
#define IO_X_SetDigitalMode()     do { ANSELCbits.ANSELC2 = 0; } while(0)

// get/set IO_Y aliases
#define IO_Y_TRIS                 TRISCbits.TRISC3
#define IO_Y_LAT                  LATCbits.LATC3
#define IO_Y_PORT                 PORTCbits.RC3
#define IO_Y_WPU                  WPUCbits.WPUC3
#define IO_Y_OD                   ODCONCbits.ODCC3
#define IO_Y_ANS                  ANSELCbits.ANSELC3
#define IO_Y_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define IO_Y_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define IO_Y_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define IO_Y_GetValue()           PORTCbits.RC3
#define IO_Y_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define IO_Y_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define IO_Y_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define IO_Y_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define IO_Y_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define IO_Y_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define IO_Y_SetAnalogMode()      do { ANSELCbits.ANSELC3 = 1; } while(0)
#define IO_Y_SetDigitalMode()     do { ANSELCbits.ANSELC3 = 0; } while(0)

// get/set IO_Z aliases
#define IO_Z_TRIS                 TRISCbits.TRISC4
#define IO_Z_LAT                  LATCbits.LATC4
#define IO_Z_PORT                 PORTCbits.RC4
#define IO_Z_WPU                  WPUCbits.WPUC4
#define IO_Z_OD                   ODCONCbits.ODCC4
#define IO_Z_ANS                  ANSELCbits.ANSELC4
#define IO_Z_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define IO_Z_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define IO_Z_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define IO_Z_GetValue()           PORTCbits.RC4
#define IO_Z_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define IO_Z_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define IO_Z_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define IO_Z_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define IO_Z_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define IO_Z_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define IO_Z_SetAnalogMode()      do { ANSELCbits.ANSELC4 = 1; } while(0)
#define IO_Z_SetDigitalMode()     do { ANSELCbits.ANSELC4 = 0; } while(0)

// get/set IO_START aliases
#define IO_START_TRIS                 TRISCbits.TRISC5
#define IO_START_LAT                  LATCbits.LATC5
#define IO_START_PORT                 PORTCbits.RC5
#define IO_START_WPU                  WPUCbits.WPUC5
#define IO_START_OD                   ODCONCbits.ODCC5
#define IO_START_ANS                  ANSELCbits.ANSELC5
#define IO_START_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define IO_START_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define IO_START_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define IO_START_GetValue()           PORTCbits.RC5
#define IO_START_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define IO_START_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define IO_START_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define IO_START_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define IO_START_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define IO_START_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define IO_START_SetAnalogMode()      do { ANSELCbits.ANSELC5 = 1; } while(0)
#define IO_START_SetDigitalMode()     do { ANSELCbits.ANSELC5 = 0; } while(0)

// get/set IO_L aliases
#define IO_L_TRIS                 TRISCbits.TRISC6
#define IO_L_LAT                  LATCbits.LATC6
#define IO_L_PORT                 PORTCbits.RC6
#define IO_L_WPU                  WPUCbits.WPUC6
#define IO_L_OD                   ODCONCbits.ODCC6
#define IO_L_ANS                  ANSELCbits.ANSELC6
#define IO_L_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define IO_L_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define IO_L_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define IO_L_GetValue()           PORTCbits.RC6
#define IO_L_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define IO_L_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define IO_L_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define IO_L_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define IO_L_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define IO_L_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define IO_L_SetAnalogMode()      do { ANSELCbits.ANSELC6 = 1; } while(0)
#define IO_L_SetDigitalMode()     do { ANSELCbits.ANSELC6 = 0; } while(0)

// get/set IO_R aliases
#define IO_R_TRIS                 TRISCbits.TRISC7
#define IO_R_LAT                  LATCbits.LATC7
#define IO_R_PORT                 PORTCbits.RC7
#define IO_R_WPU                  WPUCbits.WPUC7
#define IO_R_OD                   ODCONCbits.ODCC7
#define IO_R_ANS                  ANSELCbits.ANSELC7
#define IO_R_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define IO_R_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define IO_R_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define IO_R_GetValue()           PORTCbits.RC7
#define IO_R_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define IO_R_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define IO_R_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define IO_R_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define IO_R_SetPushPull()        do { ODCONCbits.ODCC7 = 0; } while(0)
#define IO_R_SetOpenDrain()       do { ODCONCbits.ODCC7 = 1; } while(0)
#define IO_R_SetAnalogMode()      do { ANSELCbits.ANSELC7 = 1; } while(0)
#define IO_R_SetDigitalMode()     do { ANSELCbits.ANSELC7 = 0; } while(0)

// get/set IO_SS_S0 aliases
#define IO_SS_S0_TRIS                 TRISDbits.TRISD0
#define IO_SS_S0_LAT                  LATDbits.LATD0
#define IO_SS_S0_PORT                 PORTDbits.RD0
#define IO_SS_S0_WPU                  WPUDbits.WPUD0
#define IO_SS_S0_OD                   ODCONDbits.ODCD0
#define IO_SS_S0_ANS                  ANSELDbits.ANSELD0
#define IO_SS_S0_SetHigh()            do { LATDbits.LATD0 = 1; } while(0)
#define IO_SS_S0_SetLow()             do { LATDbits.LATD0 = 0; } while(0)
#define IO_SS_S0_Toggle()             do { LATDbits.LATD0 = ~LATDbits.LATD0; } while(0)
#define IO_SS_S0_GetValue()           PORTDbits.RD0
#define IO_SS_S0_SetDigitalInput()    do { TRISDbits.TRISD0 = 1; } while(0)
#define IO_SS_S0_SetDigitalOutput()   do { TRISDbits.TRISD0 = 0; } while(0)
#define IO_SS_S0_SetPullup()          do { WPUDbits.WPUD0 = 1; } while(0)
#define IO_SS_S0_ResetPullup()        do { WPUDbits.WPUD0 = 0; } while(0)
#define IO_SS_S0_SetPushPull()        do { ODCONDbits.ODCD0 = 0; } while(0)
#define IO_SS_S0_SetOpenDrain()       do { ODCONDbits.ODCD0 = 1; } while(0)
#define IO_SS_S0_SetAnalogMode()      do { ANSELDbits.ANSELD0 = 1; } while(0)
#define IO_SS_S0_SetDigitalMode()     do { ANSELDbits.ANSELD0 = 0; } while(0)

// get/set IO_SS_S1 aliases
#define IO_SS_S1_TRIS                 TRISDbits.TRISD1
#define IO_SS_S1_LAT                  LATDbits.LATD1
#define IO_SS_S1_PORT                 PORTDbits.RD1
#define IO_SS_S1_WPU                  WPUDbits.WPUD1
#define IO_SS_S1_OD                   ODCONDbits.ODCD1
#define IO_SS_S1_ANS                  ANSELDbits.ANSELD1
#define IO_SS_S1_SetHigh()            do { LATDbits.LATD1 = 1; } while(0)
#define IO_SS_S1_SetLow()             do { LATDbits.LATD1 = 0; } while(0)
#define IO_SS_S1_Toggle()             do { LATDbits.LATD1 = ~LATDbits.LATD1; } while(0)
#define IO_SS_S1_GetValue()           PORTDbits.RD1
#define IO_SS_S1_SetDigitalInput()    do { TRISDbits.TRISD1 = 1; } while(0)
#define IO_SS_S1_SetDigitalOutput()   do { TRISDbits.TRISD1 = 0; } while(0)
#define IO_SS_S1_SetPullup()          do { WPUDbits.WPUD1 = 1; } while(0)
#define IO_SS_S1_ResetPullup()        do { WPUDbits.WPUD1 = 0; } while(0)
#define IO_SS_S1_SetPushPull()        do { ODCONDbits.ODCD1 = 0; } while(0)
#define IO_SS_S1_SetOpenDrain()       do { ODCONDbits.ODCD1 = 1; } while(0)
#define IO_SS_S1_SetAnalogMode()      do { ANSELDbits.ANSELD1 = 1; } while(0)
#define IO_SS_S1_SetDigitalMode()     do { ANSELDbits.ANSELD1 = 0; } while(0)

// get/set IO_SS_D0 aliases
#define IO_SS_D0_TRIS                 TRISDbits.TRISD2
#define IO_SS_D0_LAT                  LATDbits.LATD2
#define IO_SS_D0_PORT                 PORTDbits.RD2
#define IO_SS_D0_WPU                  WPUDbits.WPUD2
#define IO_SS_D0_OD                   ODCONDbits.ODCD2
#define IO_SS_D0_ANS                  ANSELDbits.ANSELD2
#define IO_SS_D0_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define IO_SS_D0_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define IO_SS_D0_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define IO_SS_D0_GetValue()           PORTDbits.RD2
#define IO_SS_D0_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define IO_SS_D0_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
#define IO_SS_D0_SetPullup()          do { WPUDbits.WPUD2 = 1; } while(0)
#define IO_SS_D0_ResetPullup()        do { WPUDbits.WPUD2 = 0; } while(0)
#define IO_SS_D0_SetPushPull()        do { ODCONDbits.ODCD2 = 0; } while(0)
#define IO_SS_D0_SetOpenDrain()       do { ODCONDbits.ODCD2 = 1; } while(0)
#define IO_SS_D0_SetAnalogMode()      do { ANSELDbits.ANSELD2 = 1; } while(0)
#define IO_SS_D0_SetDigitalMode()     do { ANSELDbits.ANSELD2 = 0; } while(0)

// get/set IO_SS_D1 aliases
#define IO_SS_D1_TRIS                 TRISDbits.TRISD3
#define IO_SS_D1_LAT                  LATDbits.LATD3
#define IO_SS_D1_PORT                 PORTDbits.RD3
#define IO_SS_D1_WPU                  WPUDbits.WPUD3
#define IO_SS_D1_OD                   ODCONDbits.ODCD3
#define IO_SS_D1_ANS                  ANSELDbits.ANSELD3
#define IO_SS_D1_SetHigh()            do { LATDbits.LATD3 = 1; } while(0)
#define IO_SS_D1_SetLow()             do { LATDbits.LATD3 = 0; } while(0)
#define IO_SS_D1_Toggle()             do { LATDbits.LATD3 = ~LATDbits.LATD3; } while(0)
#define IO_SS_D1_GetValue()           PORTDbits.RD3
#define IO_SS_D1_SetDigitalInput()    do { TRISDbits.TRISD3 = 1; } while(0)
#define IO_SS_D1_SetDigitalOutput()   do { TRISDbits.TRISD3 = 0; } while(0)
#define IO_SS_D1_SetPullup()          do { WPUDbits.WPUD3 = 1; } while(0)
#define IO_SS_D1_ResetPullup()        do { WPUDbits.WPUD3 = 0; } while(0)
#define IO_SS_D1_SetPushPull()        do { ODCONDbits.ODCD3 = 0; } while(0)
#define IO_SS_D1_SetOpenDrain()       do { ODCONDbits.ODCD3 = 1; } while(0)
#define IO_SS_D1_SetAnalogMode()      do { ANSELDbits.ANSELD3 = 1; } while(0)
#define IO_SS_D1_SetDigitalMode()     do { ANSELDbits.ANSELD3 = 0; } while(0)

// get/set IO_SS_D2 aliases
#define IO_SS_D2_TRIS                 TRISDbits.TRISD4
#define IO_SS_D2_LAT                  LATDbits.LATD4
#define IO_SS_D2_PORT                 PORTDbits.RD4
#define IO_SS_D2_WPU                  WPUDbits.WPUD4
#define IO_SS_D2_OD                   ODCONDbits.ODCD4
#define IO_SS_D2_ANS                  ANSELDbits.ANSELD4
#define IO_SS_D2_SetHigh()            do { LATDbits.LATD4 = 1; } while(0)
#define IO_SS_D2_SetLow()             do { LATDbits.LATD4 = 0; } while(0)
#define IO_SS_D2_Toggle()             do { LATDbits.LATD4 = ~LATDbits.LATD4; } while(0)
#define IO_SS_D2_GetValue()           PORTDbits.RD4
#define IO_SS_D2_SetDigitalInput()    do { TRISDbits.TRISD4 = 1; } while(0)
#define IO_SS_D2_SetDigitalOutput()   do { TRISDbits.TRISD4 = 0; } while(0)
#define IO_SS_D2_SetPullup()          do { WPUDbits.WPUD4 = 1; } while(0)
#define IO_SS_D2_ResetPullup()        do { WPUDbits.WPUD4 = 0; } while(0)
#define IO_SS_D2_SetPushPull()        do { ODCONDbits.ODCD4 = 0; } while(0)
#define IO_SS_D2_SetOpenDrain()       do { ODCONDbits.ODCD4 = 1; } while(0)
#define IO_SS_D2_SetAnalogMode()      do { ANSELDbits.ANSELD4 = 1; } while(0)
#define IO_SS_D2_SetDigitalMode()     do { ANSELDbits.ANSELD4 = 0; } while(0)

// get/set IO_SS_D3 aliases
#define IO_SS_D3_TRIS                 TRISDbits.TRISD5
#define IO_SS_D3_LAT                  LATDbits.LATD5
#define IO_SS_D3_PORT                 PORTDbits.RD5
#define IO_SS_D3_WPU                  WPUDbits.WPUD5
#define IO_SS_D3_OD                   ODCONDbits.ODCD5
#define IO_SS_D3_ANS                  ANSELDbits.ANSELD5
#define IO_SS_D3_SetHigh()            do { LATDbits.LATD5 = 1; } while(0)
#define IO_SS_D3_SetLow()             do { LATDbits.LATD5 = 0; } while(0)
#define IO_SS_D3_Toggle()             do { LATDbits.LATD5 = ~LATDbits.LATD5; } while(0)
#define IO_SS_D3_GetValue()           PORTDbits.RD5
#define IO_SS_D3_SetDigitalInput()    do { TRISDbits.TRISD5 = 1; } while(0)
#define IO_SS_D3_SetDigitalOutput()   do { TRISDbits.TRISD5 = 0; } while(0)
#define IO_SS_D3_SetPullup()          do { WPUDbits.WPUD5 = 1; } while(0)
#define IO_SS_D3_ResetPullup()        do { WPUDbits.WPUD5 = 0; } while(0)
#define IO_SS_D3_SetPushPull()        do { ODCONDbits.ODCD5 = 0; } while(0)
#define IO_SS_D3_SetOpenDrain()       do { ODCONDbits.ODCD5 = 1; } while(0)
#define IO_SS_D3_SetAnalogMode()      do { ANSELDbits.ANSELD5 = 1; } while(0)
#define IO_SS_D3_SetDigitalMode()     do { ANSELDbits.ANSELD5 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/