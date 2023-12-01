#include "main.h"

/**
 * flip_bits - return the number of bits necessary to flip to switch numbers
 * @n: first number to compare
 * @m: second number to compare
 *
 * Return: the number of bits it would take to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}
	return (count);
}
