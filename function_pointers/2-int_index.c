#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: pointer to an array
 * @size: size of the array
 * @cmp: pointer to a function
 *
 * Return: index of the first element of cmp
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int c;

	if (array == NULL || (*cmp) == 0  || size <= 0)
		return (-1);
	{
		while (i < size)
		{
			c = (*cmp)(array[i]);
			if (c != 0)
			{
				return (i);
			}
			i++;
		}
	}
	return (-1);
}
