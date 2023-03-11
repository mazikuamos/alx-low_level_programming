#include <stdio.h>

/**
 * main - Entry for all program codes
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: Return null
 */

int main(int argc, __attribute__((unused))char *argv[])
{
	int sum = 0;

	if (argc > 1)
		while (sum < argc)
			sum++;

	printf("%d\n", sum);

	return (0);
}
