#include "main.h"
#include <ctype.h>

/**
 * _isdigit - functest tet whether is character or number
 * isdigit - function return character or num value
 * @c: argument to function
 * Return: return value
 */

int _isdigit(int c)
{
	if (isdigit(c) > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
