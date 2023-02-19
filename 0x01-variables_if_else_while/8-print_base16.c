#include <stdio.h>

/**
 * main - Entry point function
 * putchar - Function print characters on stdio.h
 * Return: Function return null value
 */

int main(void)
{
	int c;
	int ch;

	for (c = 0; c < 10; c++)
	{
		putchar(c + '0');
	}

	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
