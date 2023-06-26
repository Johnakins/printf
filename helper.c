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
/**
 * print_nuumber - prints numbers
 * @number: the numbers
 * @base: the vase
 * Return; integer
 */
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
~
