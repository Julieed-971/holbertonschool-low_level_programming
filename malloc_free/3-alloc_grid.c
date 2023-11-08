#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of int
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to a 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int **table;
	int h = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	table = malloc(sizeof(int *) * height);
	if (table == NULL)
	{
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		table[h] = malloc(sizeof(int) * width);
		if (table[h] == 0)
		{
			for (; h > 0; h--)
			{
				free(table);
			}
			free(table);
			return (NULL);
		}
	}
	return (table);
}
