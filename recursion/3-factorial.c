#include "main.h"
#include <stdio.h>

/**
 * factorial - return the factorial of a given number
 * @n: number to factor
 * Return: int
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
