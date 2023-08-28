#ifndef PIC16LF15376_LCD_H
#define PIC16LF15376_LCD_H

#include <xc.h>

#include "mcc_generated_files/pin_manager.h" // include processor files - each processor file is guarded.  

// TODO Insert appropriate #include <>

// TODO Insert C++ class definitions if appropriate

// TODO Insert declarations
#define	 LCD_RS    LCD_RS_LAT
#define	 LCD_E     LCD_E_LAT
#define	 LCD_DB4   LCD_DB4_LAT
#define	 LCD_DB5   LCD_DB5_LAT
#define	 LCD_DB6   LCD_DB6_LAT
#define	 LCD_DB7   LCD_DB7_LAT

void LCD_Port (char bits);
void LCD_Command (char cmnd);
void LCD_Char (char char_data);
void LCD_Init (void);
void LCD_Clear(void);
void LCD_gotoxy (char x, char y);
void LCD_String (char *str);
void LCD_String_xy (char row, char pos, char *str);

#endif
