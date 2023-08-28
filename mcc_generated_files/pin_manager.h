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
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC16LF15376
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.36 and above
        MPLAB 	          :  MPLAB X 6.00	
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

// get/set LCD_DB7 aliases
#define LCD_DB7_TRIS                 TRISAbits.TRISA0
#define LCD_DB7_LAT                  LATAbits.LATA0
#define LCD_DB7_PORT                 PORTAbits.RA0
#define LCD_DB7_WPU                  WPUAbits.WPUA0
#define LCD_DB7_OD                   ODCONAbits.ODCA0
#define LCD_DB7_ANS                  ANSELAbits.ANSA0
#define LCD_DB7_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define LCD_DB7_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define LCD_DB7_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define LCD_DB7_GetValue()           PORTAbits.RA0
#define LCD_DB7_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define LCD_DB7_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define LCD_DB7_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define LCD_DB7_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define LCD_DB7_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define LCD_DB7_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define LCD_DB7_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define LCD_DB7_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set LCD_DB6 aliases
#define LCD_DB6_TRIS                 TRISAbits.TRISA1
#define LCD_DB6_LAT                  LATAbits.LATA1
#define LCD_DB6_PORT                 PORTAbits.RA1
#define LCD_DB6_WPU                  WPUAbits.WPUA1
#define LCD_DB6_OD                   ODCONAbits.ODCA1
#define LCD_DB6_ANS                  ANSELAbits.ANSA1
#define LCD_DB6_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define LCD_DB6_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define LCD_DB6_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define LCD_DB6_GetValue()           PORTAbits.RA1
#define LCD_DB6_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define LCD_DB6_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define LCD_DB6_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define LCD_DB6_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define LCD_DB6_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define LCD_DB6_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define LCD_DB6_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define LCD_DB6_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set LCD_DB5 aliases
#define LCD_DB5_TRIS                 TRISAbits.TRISA3
#define LCD_DB5_LAT                  LATAbits.LATA3
#define LCD_DB5_PORT                 PORTAbits.RA3
#define LCD_DB5_WPU                  WPUAbits.WPUA3
#define LCD_DB5_OD                   ODCONAbits.ODCA3
#define LCD_DB5_ANS                  ANSELAbits.ANSA3
#define LCD_DB5_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define LCD_DB5_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define LCD_DB5_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define LCD_DB5_GetValue()           PORTAbits.RA3
#define LCD_DB5_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define LCD_DB5_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define LCD_DB5_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define LCD_DB5_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define LCD_DB5_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define LCD_DB5_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define LCD_DB5_SetAnalogMode()      do { ANSELAbits.ANSA3 = 1; } while(0)
#define LCD_DB5_SetDigitalMode()     do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set LCD_DB4 aliases
#define LCD_DB4_TRIS                 TRISAbits.TRISA4
#define LCD_DB4_LAT                  LATAbits.LATA4
#define LCD_DB4_PORT                 PORTAbits.RA4
#define LCD_DB4_WPU                  WPUAbits.WPUA4
#define LCD_DB4_OD                   ODCONAbits.ODCA4
#define LCD_DB4_ANS                  ANSELAbits.ANSA4
#define LCD_DB4_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define LCD_DB4_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define LCD_DB4_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define LCD_DB4_GetValue()           PORTAbits.RA4
#define LCD_DB4_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define LCD_DB4_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define LCD_DB4_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define LCD_DB4_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define LCD_DB4_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define LCD_DB4_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define LCD_DB4_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define LCD_DB4_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set SW1 aliases
#define SW1_TRIS                 TRISAbits.TRISA5
#define SW1_LAT                  LATAbits.LATA5
#define SW1_PORT                 PORTAbits.RA5
#define SW1_WPU                  WPUAbits.WPUA5
#define SW1_OD                   ODCONAbits.ODCA5
#define SW1_ANS                  ANSELAbits.ANSA5
#define SW1_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define SW1_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define SW1_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define SW1_GetValue()           PORTAbits.RA5
#define SW1_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define SW1_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define SW1_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define SW1_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define SW1_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define SW1_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define SW1_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define SW1_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set RB0 procedures
#define RB0_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define RB0_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define RB0_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define RB0_GetValue()              PORTBbits.RB0
#define RB0_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define RB0_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define RB0_SetPullup()             do { WPUBbits.WPUB0 = 1; } while(0)
#define RB0_ResetPullup()           do { WPUBbits.WPUB0 = 0; } while(0)
#define RB0_SetAnalogMode()         do { ANSELBbits.ANSB0 = 1; } while(0)
#define RB0_SetDigitalMode()        do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set ENB aliases
#define ENB_TRIS                 TRISBbits.TRISB2
#define ENB_LAT                  LATBbits.LATB2
#define ENB_PORT                 PORTBbits.RB2
#define ENB_WPU                  WPUBbits.WPUB2
#define ENB_OD                   ODCONBbits.ODCB2
#define ENB_ANS                  ANSELBbits.ANSB2
#define ENB_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define ENB_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define ENB_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define ENB_GetValue()           PORTBbits.RB2
#define ENB_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define ENB_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define ENB_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define ENB_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define ENB_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define ENB_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define ENB_SetAnalogMode()      do { ANSELBbits.ANSB2 = 1; } while(0)
#define ENB_SetDigitalMode()     do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set M2 aliases
#define M2_TRIS                 TRISBbits.TRISB3
#define M2_LAT                  LATBbits.LATB3
#define M2_PORT                 PORTBbits.RB3
#define M2_WPU                  WPUBbits.WPUB3
#define M2_OD                   ODCONBbits.ODCB3
#define M2_ANS                  ANSELBbits.ANSB3
#define M2_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define M2_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define M2_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define M2_GetValue()           PORTBbits.RB3
#define M2_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define M2_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define M2_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define M2_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define M2_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define M2_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define M2_SetAnalogMode()      do { ANSELBbits.ANSB3 = 1; } while(0)
#define M2_SetDigitalMode()     do { ANSELBbits.ANSB3 = 0; } while(0)

// get/set RD6 procedures
#define RD6_SetHigh()            do { LATDbits.LATD6 = 1; } while(0)
#define RD6_SetLow()             do { LATDbits.LATD6 = 0; } while(0)
#define RD6_Toggle()             do { LATDbits.LATD6 = ~LATDbits.LATD6; } while(0)
#define RD6_GetValue()              PORTDbits.RD6
#define RD6_SetDigitalInput()    do { TRISDbits.TRISD6 = 1; } while(0)
#define RD6_SetDigitalOutput()   do { TRISDbits.TRISD6 = 0; } while(0)
#define RD6_SetPullup()             do { WPUDbits.WPUD6 = 1; } while(0)
#define RD6_ResetPullup()           do { WPUDbits.WPUD6 = 0; } while(0)
#define RD6_SetAnalogMode()         do { ANSELDbits.ANSD6 = 1; } while(0)
#define RD6_SetDigitalMode()        do { ANSELDbits.ANSD6 = 0; } while(0)

// get/set LCD_E aliases
#define LCD_E_TRIS                 TRISEbits.TRISE1
#define LCD_E_LAT                  LATEbits.LATE1
#define LCD_E_PORT                 PORTEbits.RE1
#define LCD_E_WPU                  WPUEbits.WPUE1
#define LCD_E_OD                   ODCONEbits.ODCE1
#define LCD_E_ANS                  ANSELEbits.ANSE1
#define LCD_E_SetHigh()            do { LATEbits.LATE1 = 1; } while(0)
#define LCD_E_SetLow()             do { LATEbits.LATE1 = 0; } while(0)
#define LCD_E_Toggle()             do { LATEbits.LATE1 = ~LATEbits.LATE1; } while(0)
#define LCD_E_GetValue()           PORTEbits.RE1
#define LCD_E_SetDigitalInput()    do { TRISEbits.TRISE1 = 1; } while(0)
#define LCD_E_SetDigitalOutput()   do { TRISEbits.TRISE1 = 0; } while(0)
#define LCD_E_SetPullup()          do { WPUEbits.WPUE1 = 1; } while(0)
#define LCD_E_ResetPullup()        do { WPUEbits.WPUE1 = 0; } while(0)
#define LCD_E_SetPushPull()        do { ODCONEbits.ODCE1 = 0; } while(0)
#define LCD_E_SetOpenDrain()       do { ODCONEbits.ODCE1 = 1; } while(0)
#define LCD_E_SetAnalogMode()      do { ANSELEbits.ANSE1 = 1; } while(0)
#define LCD_E_SetDigitalMode()     do { ANSELEbits.ANSE1 = 0; } while(0)

// get/set LCD_RS aliases
#define LCD_RS_TRIS                 TRISEbits.TRISE2
#define LCD_RS_LAT                  LATEbits.LATE2
#define LCD_RS_PORT                 PORTEbits.RE2
#define LCD_RS_WPU                  WPUEbits.WPUE2
#define LCD_RS_OD                   ODCONEbits.ODCE2
#define LCD_RS_ANS                  ANSELEbits.ANSE2
#define LCD_RS_SetHigh()            do { LATEbits.LATE2 = 1; } while(0)
#define LCD_RS_SetLow()             do { LATEbits.LATE2 = 0; } while(0)
#define LCD_RS_Toggle()             do { LATEbits.LATE2 = ~LATEbits.LATE2; } while(0)
#define LCD_RS_GetValue()           PORTEbits.RE2
#define LCD_RS_SetDigitalInput()    do { TRISEbits.TRISE2 = 1; } while(0)
#define LCD_RS_SetDigitalOutput()   do { TRISEbits.TRISE2 = 0; } while(0)
#define LCD_RS_SetPullup()          do { WPUEbits.WPUE2 = 1; } while(0)
#define LCD_RS_ResetPullup()        do { WPUEbits.WPUE2 = 0; } while(0)
#define LCD_RS_SetPushPull()        do { ODCONEbits.ODCE2 = 0; } while(0)
#define LCD_RS_SetOpenDrain()       do { ODCONEbits.ODCE2 = 1; } while(0)
#define LCD_RS_SetAnalogMode()      do { ANSELEbits.ANSE2 = 1; } while(0)
#define LCD_RS_SetDigitalMode()     do { ANSELEbits.ANSE2 = 0; } while(0)

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