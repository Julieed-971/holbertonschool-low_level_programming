#include "main.h"
#include <stddef.h>
#include <string.h>
#include <stdio.h>

/**
 * print_diagsums - prints sum of the two diagonals of a square matrix of int
 * @a: pointer to an int
 * @size: size of the array
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i * size + i];
		sum2 = sum2 + a[i * size + (size - i - 1)];
	}
	{
		printf("%d ,%d\n", sum1, sum2);
	}
}
