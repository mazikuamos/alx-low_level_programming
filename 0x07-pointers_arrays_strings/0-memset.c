#include "main.h"
#include <string.h>

/**
 * _memset - function return pointer
 * @s: - pointer
 * @b: input value
 * @n: size of input value
 *
 * Return: Return pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
