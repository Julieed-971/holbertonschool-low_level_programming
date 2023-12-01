#include "main.h"

/**
 * get_bit - returns value of a bit at a given index
 * @n: the number to return the value of bit at index from
 * @index: position where to get the value of the bit
 *
 * Return: value of the bit at the given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;
	int mask, bit_num, result;
	int *bits = malloc(sizeof(int) * (index + 1));

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	if (bits == NULL)
		return (-1);

	while (i <= index)
	{
		mask =  1 << i;
		bit_num = (n & mask) >> i;

		bits[i] = bit_num;
		i++;
	}
	result = bits[index];

	free(bits);

	return (result);
}
