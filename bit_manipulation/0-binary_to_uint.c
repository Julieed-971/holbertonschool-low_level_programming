#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of char
 *
 * Return: the converted unsigned integer
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0')
		{
			result = result * 2 + 0;
			i++;
		}
		else if (b[i] == '1')
		{
			result = result * 2 + 1;
			i++;
		}
		else
			return (0);
	}
	return (result);
}
