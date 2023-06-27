#include "main.h"
/**
 * print_decimal - prints decimal integers
 * @arg_list: argument list
 * Return: an integer
 */
int print_decimal(va_list arg_list)
{
	int num;
	int count;
	char buffer[12];
	char *ptr = buffer;

	num = va_arg(arg_list, int);
	count = 0;

	sprintf(buffer, "%d", num);

	while (*ptr != '\0')
	{
		putchar(*ptr);
		ptr++;
		count++;
	}
	return (count);
}
