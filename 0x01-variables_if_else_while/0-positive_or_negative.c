#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point function
 * srand - Function used to generate random number
 * rand - Function return random number
 * Return: Retrun the value 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d Undefined number\n", n);
	}
	return (0);
}
