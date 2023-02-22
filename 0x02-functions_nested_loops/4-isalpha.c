#include "main.h"
#include <ctype.h>

/**
 * _isalpha - function Test if is number or character
 * @c: Is a tested value
 * isalpha - return 0 for character and value greater than 0 for number.
 * Return: Return value 0
 */
int _isalpha(int c)
{
	int value = isalpha(c);

	if (value == 0)
		return (0);
	else
		return (1);

	return (0);
}
