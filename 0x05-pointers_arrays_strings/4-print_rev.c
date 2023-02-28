#include "main.h"
#include <string.h>

/**
 * print_rev - function reverse string
 * strlen - function calculate len of string
 * _putchar - function to print character to stdio
 * @s: Formal parameter
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (i -= 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
