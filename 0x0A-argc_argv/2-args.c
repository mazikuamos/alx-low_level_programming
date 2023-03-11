#include <stdio.h>

/**
 * main - Entry point for all program code
 * @argc: size of arguments
 * @argv: arguments
 *
 * Return: Return null
 */

int main(int argc, char *argv[])
{
	int count;

	if (argc > 1)
	{
		for (count = 0; count < argc; count++)
			printf("%s\n", argv[count]);
	}
	else
		printf("%s\n", argv[0]);

	return (0);
}
