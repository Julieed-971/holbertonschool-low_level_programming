#include "main.h"

/**
 * clear_bit - modify the bit value at a given index to 0
 * @n: number to change one bit at a given index
 * @index: position where to set the bit to 0
 *
 * Return: 1 if succeeded, -1 if error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = ~(1UL << index);

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n & mask;
	return (1);
}
