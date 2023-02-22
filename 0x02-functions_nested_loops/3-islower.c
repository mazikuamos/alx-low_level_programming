#include "main.h"
#include <ctype.h>

/**
 * _islower - function return 0 and 1
 * islower - function return lowercase latter
 * Return: Return values
 * @c: parameter value
 */

int _islower(int c)
{
	if (islower(c) <= 0)
		return (0);
	else
		return (1);

	return (0);
}
