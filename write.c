#include "main.h"
/**
 * write - writes charaters to stdout
 * @c: the character to print
 * Return: 1, -1 if failed
 */
int _write(char c)
{
	return (write(1, &c, 1));
}
