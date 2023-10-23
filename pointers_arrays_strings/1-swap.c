#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: int to swap
 * @b: int to switch
 */

void swap_int(int *a, int *b)
{
	int tmp = 0;

	tmp = *b;
	*b = *a;
	*a = tmp;
}
