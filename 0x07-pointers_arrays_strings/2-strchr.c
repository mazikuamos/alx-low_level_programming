#include "main.h"
#include <stdio.h>

/**
 * _strchr - function searching character
 * @s: input String
 * @c: input search pattern
 *
 * Return: Return point or Null if not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
