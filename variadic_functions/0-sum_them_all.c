#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - make the sum of all its parameters
 * @n: number of arguments
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int i;
	int sum = 0;

	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(p, int);
	}
	va_end(p);
	return (sum);
}
