#pragma once

#include "at32f403a_407.h"

#include "at32f403a_clock.h"

#include "systick_delay.h"




#include "at32f403a_407_usart.h"
#include "stdio.h"
#define PRINT_UART                       USART1
#define PRINT_UART_CRM_CLK               CRM_USART1_PERIPH_CLOCK
#define PRINT_UART_TX_PIN                GPIO_PINS_9
#define PRINT_UART_TX_GPIO               GPIOA
#define PRINT_UART_TX_GPIO_CRM_CLK       CRM_GPIOA_PERIPH_CLOCK
#define PUTCHAR_PROTOTYPE int fputc(int ch, FILE *f)




void uart_print_init(uint32_t baudrate);
void led_init();
PUTCHAR_PROTOTYPE;