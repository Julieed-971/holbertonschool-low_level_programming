#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - write all integers from n to 98
 * @n: integer to start counting
 * Return: void
 */

void print_to_98(int n)
{
	for (; n < 98; n++)
	{
		printf("%d, ", n);
	}
	for (; n > 98; n--)
	{
		printf("%d, ", n);
	}
	printf("%d\n", n);
}
