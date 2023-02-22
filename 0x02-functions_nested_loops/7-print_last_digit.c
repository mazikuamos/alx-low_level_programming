#include "main.h"

/**
 * print_last_digit - function return last digits
 * @num: Argument on print_last_digit function
 * Return: Return value
 */

int print_last_digit(int num)
{
	int digits;

	digits = num % 10;
	if (digits < 0)
	{
		digits = digits * -1;
	}	
	_putchar(digits + '0');

	return (digits);
}
