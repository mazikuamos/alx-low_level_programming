#include "main.h"

/**
 * _print_rev_recursion - function return reverse string
 * _putchar - function print charactor on stdio
 * @s: input pointer
 * Return: Return character
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
		return;
}
