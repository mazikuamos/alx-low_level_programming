#include "main.h"

/**
 * print_alphabet_x10 - Function print characters 10 times
 * _putchar - function print character
 */

void print_alphabet_x10(void)
{
	char c, i;

	for (i =  0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
