#include "main.h"
#include <math.h>

/**
 * check_for_prime - check if n is a prime number
 * @i: int
 * @n: number to check
 * Return: int
 */

int check_for_prime(int i, int n)
{
	if (n == 1)
	{
		return (0);
	}
	if (i == n - 1)
	{
		return (0);
	}
	if ((n % i) == 0)
	{
		return (1);
	}
	return (check_for_prime((i + 1), n));
}

/**
 * is_prime_number - return 0 or 1 if n is either a prime number or not
 * @n: number to check
 * Return: int
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (check_for_prime(2, n) == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
