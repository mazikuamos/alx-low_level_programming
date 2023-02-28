#include "main.h"

/**
 * swap_int - function swap two numbers
 * @a: Formal parameter
 * @b: Formal parameter
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
