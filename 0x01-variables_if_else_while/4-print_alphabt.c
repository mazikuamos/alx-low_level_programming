#include <stdio.h>

/**
 * main - Entry function
 * putchar - print characters to stdio
 * Return: Return null value
 */


int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q')
		{
			continue;
		}
		else if (ch == 'e')
		{
			continue;
		}
		else
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
