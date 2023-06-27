#include "main.h"
#include <unistd.h>
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
		{"d", print_decimal},
		{"i", print_decimal},
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
	int j;
	int v;

	count = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; f_list[j].sys != NULL; j++)
			{
				v = f_list[j].f(arg_list);
				if (v == -1)
				{
					return (-1);
					count += v;
					break;
				}
			}
			if (f_list[j].sys == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					putchar(format[i]);
					putchar(format[i + 1]);
					count = count + 2;
				}
				else
				{
					return (-1);
				}
			}
			i = i + 1;
		}
		else
		{
			putchar(format[i]);
			count++;
		}
	}
	
	return (count);
}

