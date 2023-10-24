#include <stdio.h>
#include "main.h"

/**
 * print_array - print n elements of an array of int
 * @a: pointer to array
 * @n: number of array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
		printf("%d, ", a[i]);

	if (i == n - 1)
	{
		printf("%d\n", a[i]);
	}
}
