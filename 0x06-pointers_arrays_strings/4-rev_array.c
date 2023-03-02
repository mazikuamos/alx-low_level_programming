#include "main.h"

/**
 * reverse_array - reverse array integers
 * @a: array
 * @n: length
 */

void reverse_array(int *a, int n)
{
	int i, t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
