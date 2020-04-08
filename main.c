/*
 * File:   main.c
 * Author: LENOVO
 *
 * Created on April 8, 2020, 4:37 PM
 */


#include <avr/io.h>
#define LED0 2
#define LED1 7
#define LED2 3
#define BUZZER 3

int main(void) 
{
    
    while (1) 
    {
    DDRA |= 0xFF;
    PORTA = (1<<BUZZER);
    DDRC |= 0xFF;
    PORTC = (1<<LED0);
    PORTC = (1<<LED1);
    DDRD |= 0xFF;
    PORTD = (1<<LED2);  
    }
}
