#include <stdio.h>

/**
 * main - Entry function for all codes
 * putchar - function print characters to stdio
 * Return: Return null value
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
