#include <stdio.h>

/**
 * main - Entry point of all function
 * @argc: number of argument
 * @argv: arguments
 *
 * Return: Return null
 */

int main(int argc, char *argv[])
{
	if (argc > 0 && argc <= 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
