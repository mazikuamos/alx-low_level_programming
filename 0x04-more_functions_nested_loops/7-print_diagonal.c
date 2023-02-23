#include "main.h"

/**
 * print_diagonal - function print backslash character
 * _putchar - function print character
 * @n: Argument on print_diagonal function
 */

void print_diagonal(int n)
{
	int i, j;

	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
