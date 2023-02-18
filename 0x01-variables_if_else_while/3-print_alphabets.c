#include <stdio.h>

/**
 * main - Entry point function
 * putchar - Print characters on stdio
 * Return: Return null value
 */


int main(void)
{
	char c;

	char ch;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
