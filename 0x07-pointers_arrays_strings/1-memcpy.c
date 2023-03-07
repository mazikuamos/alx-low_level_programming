#include "main.h"
#include <string.h>

/**
 * _memcpy - function copy element
 * @dest: distination point
 * @src: source of element
 * @n: size of bytes copied
 *
 * Return: Return pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 1; i <= n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
