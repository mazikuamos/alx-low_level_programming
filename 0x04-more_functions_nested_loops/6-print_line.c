#include "main.h"

/**
 * print_line - function to print line on terminal
 * _putchar - function to print character
 * @n: Argument within print_line function
 */

void print_line(int n)
{
	int i;

	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
