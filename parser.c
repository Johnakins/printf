#include "main.h"
/**
 * parser - printf helper
 * @format: the format
 * @f-list: the function list
 * @arg_list: argumen list
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
