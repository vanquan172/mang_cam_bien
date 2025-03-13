#ifndef UART1_H
#define UART1_H

#include "stm32f10x.h"
#include <stdio.h>

void USART1_Init(void);
void USART1_SendChar(char c);
void USART1_SendString(char *s);

#endif
