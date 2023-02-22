#include "main.h"

/**
 * print_sign - function print characters
 * _putchar - function print special character
 * Return: Return value 0
 * @n: argument to function
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
