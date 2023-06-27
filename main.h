#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
/**
 * struct start - defines a structure
 * @sys: the operator
 * @f: the function associated
 */
typedef struct conver_s
{
	char *sys;
	int (*f)(va_list);
} conver_t;
int print_char(va_list arg_list);
int print_string(va_list arg_list);
int print_percent(va_list arg_list);
int print_decimal(va_list arg_list);
int _putchar(char c);
int parser(const char *format, conver_t f_list[], va_list arg_list);
int _printf(const char *format, ... );


#endif
