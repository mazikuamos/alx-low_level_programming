#include <stdio.h>

/**
 * main - Entry function for all codes
 * putchar - print characters on stdio.h
 * Return: Return null value
 */

int main(void)
{
	int ch;

	for (ch = 0; ch < 10; ch++)
	{
		putchar(ch + '0');
	}
	putchar('\n');
	return (0);
}
