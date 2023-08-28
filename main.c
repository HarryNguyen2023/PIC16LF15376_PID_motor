#include "mcc_generated_files/mcc.h"
#include <stdio.h>
#include "motor_pid.h"
/*
                         Main application
 */
char str[25];
uint8_t count = 0;

// Variables for control position
float target_position = 0;
float current_position = 0;
float delta_time = 0.005;

// Function prototype
void externalInterrupt_ISR(void);
void timer0_ISR(void);
void motorInit(void);
void directionControl(motor_direction direc);

void main(void)
{
    // initialize the device
    SYSTEM_Initialize();
    
    // Initiate Timer 0 interrupt
    TMR0_SetInterruptHandler(timer0_ISR);
    TMR0_StopTimer();
    // Configure external interrupt
    INT_SetInterruptHandler(externalInterrupt_ISR);
    // Enable peripheral interrupt
    INTERRUPT_PeripheralInterruptEnable();
    // Enable global interrupt
    INTERRUPT_GlobalInterruptEnable();
    
    // Initiate motor and configure the function to control the direction of the motor
    motorInit();
    setDirectionControlFunction(directionControl);
    
    // Main duty
    while (1)
    {
        CLRWDT();
        if(SW1_GetValue() == 0)
        {
            __delay_ms(20);
            if(SW1_GetValue() == 0)
            {
                target_position = 200;
                current_position = 0;
                TMR0_StartTimer();
            }
            while(SW1_GetValue() == 0);
        }  
    }
}

// Function to read encoder
void externalInterrupt_ISR()
{
    if(ENB_GetValue() == 1)
        current_position += 1;
    else
        current_position -= 1;
}

// Function to call timer0
void timer0_ISR()
{
    if(count++ == 5){
        count = 0;
        positionMotorControl(PWM3_LoadDutyValue, 1.5, 0, 0);
    }
}

// Function to initiate the motor to run at 2000 Hz
void motorInit()
{
    M2_SetLow();
    PWM3_LoadDutyValue(0);
    // Load the value of the PR2 register
    uint8_t pwm_period = (_XTAL_FREQ / 2000) / 4 - 1;
    TMR2_LoadPeriodRegister(pwm_period);
}

// Function to control the direction of the motor
void directionControl(motor_direction direc)
{
    if(direc == MOTOR_CCW)
        M2_SetLow();
    else if(direc == MOTOR_CW)
        M2_SetHigh();
    else if(direc == MOTOR_STOP)
    {
        M2_SetLow();
        TMR0_StopTimer();
    } 
}