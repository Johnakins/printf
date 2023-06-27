# C - PRINTF

## Synopsis
This is a simple implementation of printf function that formats and prints data

## Description
The _printf()_ function produces outputs according to a format which is decribed below. this function write it output to the _stdout_ which means Standard Output Stream. It returns the count of printed characters when the function is successful and (-1) when the function fails.

The avaliable conversion specifiers are:
+ %i: prints integers.
+ %d: prints integers (also).
+ %s: prints a string of characters.
+ %c: prints a single character.
+ %b: prints the binary representation of an unsigned decimal
+ %u: prints unsigned integers.
+ %x: prints the hexadecimal representation of an unsigned decimal in lowercase letters.
+ %X: prints the hexadecimal representation of an unsigned decimal in uppercase letters.
+ %r: prints a reversed string.
+ %R: prints the Rot13 interpretation of a string.

## Usage
+ All the files are to be compiled on Ubuntu
+ Compile your code with `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c`
+ Include the "main.h" header file on the functions using the _printf()

## Example

```

#include "main.h"
#include <stdio.h>
/**
* main - Entry point
* 
* Return: Always 0
*/

int main(void)
{
	int p = 12345;
	char c = 'A';
	char s = "John";

	_printf("Hello, %s !The character is %c and this is a percentage sign %%, printing decimal %d.\n", c, s, p);
	
	return (0);
}

```
