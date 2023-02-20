#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of all codes
 * srand - Function generate random number
 * rand - Random number function
 * Return: Return value function
 */
int main(void)
{
	int n;

	int num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	num = n % 10;
	if (num > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, num);
	}
	else if (num == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, num);
	}
	else if (num < 0 && num != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, num);
	}
	else
	{
		printf("Undefined number\n");
	}

	return (0);
}
