/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.4
        Device            :  PIC18F47Q10
        Driver Version    :  2.00
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

#include "mcc_generated_files/mcc.h"
#include "SS2NG_Joystick_const.h"

//intrrupt_StartApplication
enum INT_STARTAPP STATE_STARTAPP;

//SS SelSignal
enum SS_SEL STATE_SS_SEL;

/*
                         Main application
 */
void main(void)
{
    // Initialize the device
    SYSTEM_Initialize();

    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global and Peripheral Interrupts
    // Use the following macros to:

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();

    //STATE_STARTAPP  =   INT_STARTAPP.RUN;
    STATE_SS_SEL    = AB_00;
    STATE_STARTAPP  = RUN;

    IO_SS_S0_SetLow();
    IO_SS_S1_SetLow();
                
    IO_UP_SetHigh();
    IO_DOWN_SetHigh();
    IO_LEFT_SetHigh();
    IO_RIGHT_SetHigh();
    IO_A_SetHigh();
    IO_B_SetHigh();
    IO_C_SetHigh();
    IO_X_SetHigh();
    IO_Y_SetHigh();
    IO_Z_SetHigh();
    IO_L_SetHigh();
    IO_R_SetHigh();
    
    //TMR1_StartTimer();
    //TMR1_ISR();
    
    while (1)
    {
        // Add your application code
        if ( STATE_STARTAPP == RUN )
        {
            if(STATE_SS_SEL==AB_00){
                IO_SS_S0_SetLow();
                IO_SS_S1_SetLow();
                __delay_us(100);
                
                if (IO_SS_D0_GetValue()==HIGH){
                    IO_Z_SetHigh();
                } else if(IO_SS_D0_GetValue()==LOW){
                    IO_Z_SetLow();
                }

                if (IO_SS_D1_GetValue()==HIGH){
                    IO_Y_SetHigh();
                } else if(IO_SS_D1_GetValue()==LOW){
                    IO_Y_SetLow();
                }

                if (IO_SS_D2_GetValue()==HIGH){
                    IO_X_SetHigh();
                } else if(IO_SS_D2_GetValue()==LOW){
                    IO_X_SetLow();
                }
 
                if (IO_SS_D3_GetValue()==HIGH){
                    IO_R_SetHigh();
                } else if(IO_SS_D3_GetValue()==LOW){
                    IO_R_SetLow();
                }               
                STATE_SS_SEL    = AB_10;

            }else if (STATE_SS_SEL==AB_10){
                IO_SS_S0_SetHigh();
                IO_SS_S1_SetLow();
                __delay_us(100);
                
                if (IO_SS_D0_GetValue()==HIGH){
                    IO_B_SetHigh();
                } else if(IO_SS_D0_GetValue()==LOW){
                    IO_B_SetLow();
                }

                if (IO_SS_D1_GetValue()==HIGH){
                    IO_C_SetHigh();
                } else if(IO_SS_D1_GetValue()==LOW){
                    IO_C_SetLow();
                }

                if (IO_SS_D2_GetValue()==HIGH){
                    IO_A_SetHigh();
                } else if(IO_SS_D2_GetValue()==LOW){
                    IO_A_SetLow();
                }
 
                if (IO_SS_D3_GetValue()==HIGH){
                    IO_START_SetHigh();
                } else if(IO_SS_D3_GetValue()==LOW){
                    IO_START_SetLow();
                }               
                STATE_SS_SEL    = AB_01;

            }else if (STATE_SS_SEL==AB_01){
                IO_SS_S0_SetLow();
                IO_SS_S1_SetHigh();
                __delay_us(100);
                
                if (IO_SS_D0_GetValue()==HIGH){
                    IO_UP_SetHigh();
                } else if(IO_SS_D0_GetValue()==LOW){
                    IO_UP_SetLow();
                }

                if (IO_SS_D1_GetValue()==HIGH){
                    IO_DOWN_SetHigh();
                } else if(IO_SS_D1_GetValue()==LOW){
                    IO_DOWN_SetLow();
                }

                if (IO_SS_D2_GetValue()==HIGH){
                    IO_LEFT_SetHigh();
                } else if(IO_SS_D2_GetValue()==LOW){
                    IO_LEFT_SetLow();
                }
 
                if (IO_SS_D3_GetValue()==HIGH){
                    IO_RIGHT_SetHigh();
                } else if(IO_SS_D3_GetValue()==LOW){
                    IO_RIGHT_SetLow();
                }     
                STATE_SS_SEL    = AB_11;

            }else if (STATE_SS_SEL==AB_11){
                IO_SS_S0_SetHigh();
                IO_SS_S1_SetHigh();
                __delay_us(100);
                
                /*
                if (IO_SS_D0_GetValue()==HIGH){
                } else if(IO_SS_D0_GetValue()==LOW){
                }
                
                if (IO_SS_D1_GetValue()==HIGH){
                } else if(IO_SS_D1_GetValue()==LOW){
                }

                if (IO_SS_D2_GetValue()==HIGH){
                } else if(IO_SS_D2_GetValue()==LOW){
                }
                */
                if (IO_SS_D3_GetValue()==HIGH){
                    IO_L_SetHigh();
                } else if(IO_SS_D3_GetValue()==LOW){
                    IO_L_SetLow();
                } 
                    
                STATE_SS_SEL    = AB_00;

            }else{
                STATE_SS_SEL    = AB_00;
            }

            STATE_STARTAPP = STAY;
        }
    }
}
/**
 End of File
*/