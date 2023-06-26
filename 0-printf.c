#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: the format
 * Return: an integer
 */
int _printf(const char *format, ...)
{
	va_list arg_list;
	int printed_chars;

	conver_t va_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}
	};

	if (format == NULL)
	{
		return (-1);
	}

	va_start(arg_list, format);
	printed_chars = parser(format, va_list, arg_list);
	va_end(arg_list);

	return (printed_chars);
}
/**
 * parser - printf helper
 * @format: the format
 * @f_list: function list
 * @arg_list: argument list
 * Return: integer
 */
int parser(const char *format, conver_t f_list[], va_list arg_list)
{
	int i;
	int count;

	count = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;

			i = 0;
			while (f_list[i].sys != NULL)
			{
				if (*format == *(f_list[i].sys))
				{
				count += f_list[i].f(arg_list);
				break;
				}
				i++;
			}
			if (f_list[i].sys == NULL)
			{
				putchar('%');
				putchar(*format);
				count += 2;
			}
		}
		else
		{
			putchar(*format);
			count++;
		}
		format++;
	}
	return (count);
}

/**
 * print_char - prints characters
 * @arg_list: argument list
 * Return: 1
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

