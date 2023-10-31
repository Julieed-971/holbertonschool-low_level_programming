#include "main.h"
#include <math.h>
#include <stddef.h>

/**
 * sqrt_root - calculate the square root of an int
 * @n: number to calculate the square root from
 * @x: square number to find
 * Return: int
 */

int sqrt_root(int n, int x)
{
	if ((x * x) == n)
	{
		return (x);
	}
	else if ((x * x) < n)
	{
		return (sqrt_root(n, (x + 1)));
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (sqrt_root(n, 0));
	}
}
