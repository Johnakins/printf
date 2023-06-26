#include "main.h"
/**
 * print_char - prints characters
 * @arg_list: argument list
 * Return: integer
 */
int print_char(va_list arg_list)
{
	char c;

	c = (char)va_arg(arg_list, int);
	putchar(c);
	return (1);
}
/**
 * print_string - prints a sting
 * @arg_list: argument list
 * Return: integers
 */
int print_string(va_list arg_list)
{
	const char *str;
	int count;

	str = va_arg(arg_list, const char *);
	count = 0;
	while (*str != '\0')
	{
		putchar(*str);
		str++;
		count++;
	}
	return (count);
}

/**
 * print_percent - prints the percent sign
 * @arg_list: argument list
 * Return: 1
 */
int print_percent(va_list arg_list)
{
	(void) arg_list;

	putchar('%');
	return (1);
}
