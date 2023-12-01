#include "main.h"

/**
 * set_bit - modify the bit value at a given index to 1
 * @n: number to change one bit at a given index
 * @index: position where to set the bit to 1
 *
 * Return: 1 if succeeded, -1 if error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n | mask;
	return (0);
}
