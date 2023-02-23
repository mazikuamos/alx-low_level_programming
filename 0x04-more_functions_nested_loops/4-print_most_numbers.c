#include "main.h"

/**
 * print_most_numbers - function print number
 * _putchar - function print on screen
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if (n == 2 || n == 4)
			continue;
		else
			_putchar(n + '0');
	}
	_putchar('\n');
}
