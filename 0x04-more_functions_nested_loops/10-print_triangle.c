#include "main.h"

/**
 * print_triangle - function print triangle
 * _putchar - function print character
 * @size: Argument in print_triangle function
 */


void print_triangle(int size)
{
	int i, j, k;

	if (size == 0 || size < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = size; j > i; j--)
			{
				_putchar(' ');
			}
			for (k = 0; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
