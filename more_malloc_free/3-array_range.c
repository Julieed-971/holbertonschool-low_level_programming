#include "main.h"

/**
 * array_range - creates an array of int
 * @min: minimum value
 * @max: maximum valut
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int len = 0;
	int *arr;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	while (len <= max)
	{
		len++;
	}
	arr = malloc(sizeof(int) * len);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
