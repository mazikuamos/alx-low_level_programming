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
	int i;
	int mult = 1;

	if (argc > 2 && argc <= 3)
	{
		for (i = 1; i < argc; i++)
			mult = mult * atoi(argv[i]);
	}
	else
		printf("Error\n");

	return (0);
}
