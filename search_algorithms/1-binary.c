#include "search_algos.h"

/**
* print_array - Prints an array of integers
*
* @array: The array to be printed
* @: Number of elements in @array
*/
void print_array(int *array, size_t left, size_t right)
{

	printf("Searching in array: ");
	while (array && left <= right)
	{
		printf("%d", array[left]);
		if (left < right)
			printf(", ");
		left++;
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array
 * @array: array to search
 * @size: size of the array
 * @value: value to search
 *
 * Return: index of the found value
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, middle = 0;

	if (array)
	{
		while (left <= right)
		{
			print_array(array, left, right);
			middle = (left + right) / 2;
			if (value == array[middle])
				return (middle);
			else if (value < array[middle])
				right = middle - 1;
			else
				left = middle + 1;
		}
	}
	return (-1);
}
