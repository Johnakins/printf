#include "main.h"
/**
 * print_decimal - prints decimal
 * @arg_list: argument list
 * Return: integer
 */
int print_decimal(va_list arg_list)
{
	int count;
	int num;

	num = va-arg(arg_list, int);
	count = 0;

	if (num < 0)
	{
		putchar('-');
		num = -num;
		count++;
	}
	count += print_number(num, 10);
	return (count);
}

int print_number(unsigned int number, int base)
{
	static const char *digits = "0123456789ABCDEF";
	char buffer[32];
	int count = 0;
	int index = 0;

	if (num == 0)
	{
		putchar('0');
		count++;
	}
	else
	{
		while (num != 0)
		{
			buffer[index++] = digits[num % base];
			num /= base;
		}
		while (index > 0)
		{
			putchar(buffer[--index]);
			count++;
		}
	}
	return (count);
}
