#include "main.h"
#include <string.h>
#include <stdbool.h>

/**
 * _strspn - function calculate number of substring
 * @s: input instring
 * @accept: substring
 *
 * Return: Return number of element
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	unsigned int i, j;

	unsigned int len1 = strlen(s);
	unsigned int len2 = strlen(accept);

	for (i = 0; i < len1; i++)
	{
		bool found = false;

		for (j = 0; j < len2; j++)
		{
			if (accept[j] == s[i])
			{
				found = true;
				break;
			}
		}
		if (found)
			count++;
		else
			break;
	}
	return (count);
}
