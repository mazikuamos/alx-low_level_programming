#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry For all program codes
 * atoi - function convert string to int
 * @argc: argument size
 * @argv: argument vector
 *
 * Return: Return null
 */

int main(int argc, char *argv[])
{
	int i, j, c;

	if (argc > 2)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		c = i * j;
		printf("%d\n", c);
	}
	else
		printf("Error\n");

	return (0);
}
