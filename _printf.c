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
