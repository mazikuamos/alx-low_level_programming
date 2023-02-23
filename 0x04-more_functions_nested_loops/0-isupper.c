#include "main.h"
#include <ctype.h> 

/**
 * _isupper - function return uppercase value
 * isupper - function return uppercase character
 * Return: Return value
 * @c: argument on _isupper function
 */

int _isupper(int c)
{
	if (isupper(c) > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
