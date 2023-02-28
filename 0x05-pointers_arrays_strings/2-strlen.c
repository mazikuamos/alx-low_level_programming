#include "main.h"
#include <string.h>

/**
 * _strlen - function return len of string
 * @s: Formal parameter
 * Return: Return len
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
