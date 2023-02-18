#include <stdio.h>

/**
 * main - Entry Function
 * putchar - Print characters to stdio
 * Return: Return value
 */

int main(void)
{
	char charVariable;

	for (charVariable = 'a'; charVariable < 'z'; charVariable++)
	{
		putchar(charVariable);
	}
	putchar('\n');

	return (0);
}
