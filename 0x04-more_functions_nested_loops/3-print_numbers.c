#include "main.h"
/**
 * print_numbers - function print number
 * _putchar - function print on the screen
 */
void print_numbers(void)
{
	int a;

	for (a = 0; a < 10;  a++)
	{
		_putchar(a + '0');
	}
	_putchar('\n');
}
