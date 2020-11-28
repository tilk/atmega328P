#ifndef _UART_H
#define _UART_H

void uart_init(void);
int uart_transmit(char c, FILE *stream);
int uart_receive(FILE *stream);

extern FILE uart_file;

#endif
