
#include "LCD.h"
#include "mcc_generated_files/device_config.h"


void LCD_Port (char bits)
{
     if(bits&1)
        LCD_DB4_SetHigh();
    else
        LCD_DB4_SetLow();
    bits>>=1;

    if(bits&1)
        LCD_DB5_SetHigh();
    else
        LCD_DB5_SetLow();
    bits>>=1;

    if(bits&1)
        LCD_DB6_SetHigh();
    else
        LCD_DB6_SetLow();
    bits>>=1;

    if(bits&1)
        LCD_DB7_SetHigh();
    else
        LCD_DB7_SetLow();
}

void LCD_Command (char cmnd) /* LCD16x2 command funtion */
{
     LCD_Port(cmnd>>4);/* Send upper nibble */
     LCD_RS =0;   /* Command reg. */
     LCD_E =1; 
    __delay_us(1000);
     LCD_E=0;
    __delay_us(2000);
 
     LCD_Port(cmnd);/* Send lower nibble */
     LCD_E = 1;   /* Enable pulse */
    __delay_us(1000);
     LCD_E=0;
    __delay_us(5000);
}

void LCD_Char (char char_data) /* LCD data write function */
{
     LCD_Port(char_data>>4) ;/* Send upper nibble */
    LCD_RS = 1;   /* Data reg.*/
    LCD_E= 1;
    __delay_us(1000);
    LCD_E= 0;
    __delay_us(2000);

    LCD_Port (char_data);/* Send lower nibble */
    LCD_E=1;   /* Enable pulse */
    __delay_us(1000);
    LCD_E=0;
    __delay_us(5000);
}

void LCD_Init (void)  /* LCD Initialize function */
{
    __delay_us(20000);  /* LCD Power ON Initialization time >15ms */
    LCD_Command (0x02); /* 4bit mode */
    __delay_ms(2);
    LCD_Command (0x28); /* Initialization of 16X2 LCD in 4bit mode */
    __delay_ms(2);
    LCD_Command (0x0C); /* Display ON Cursor OFF */
    __delay_ms(2);
    LCD_Command (0x06); /* Auto Increment cursor */
    __delay_ms(2);
    LCD_Command (0x01); /* Clear display */
    __delay_ms(3);
    LCD_Command (0x80); /* Cursor at home position */
    __delay_ms(2);
}

void LCD_Clear(void)
{
    LCD_Command (0x01); /* Clear display */
    __delay_ms(3);
}

void LCD_String (char *str) /* Send string to LCD function */
{
    int i;
    for(i=0;str[i]!=0;i++)  /* Send each char of string till the NULL */
    {
        LCD_Char (str[i]);  /* Call LCD data write */
    }
}

void LCD_String_xy (char row, char pos, char *str)  /* Send string to LCD function */
{
    if (row == 0)
    LCD_Command((pos & 0x0F)|0x80);
    else if (row == 1)
    LCD_Command((pos & 0x0F)|0xC0);
    LCD_String(str);   /* Call LCD string function */
}

void LCD_gotoxy (char x, char y)
{
    LCD_Command( 0b10000000 | (x | (y*0x40 ) ) );
}

