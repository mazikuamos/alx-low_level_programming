#include "main.h"

/**
 * _puts_recursion - function return string
 * _putchar - function print string on stdio
 * @s: input pointer
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
