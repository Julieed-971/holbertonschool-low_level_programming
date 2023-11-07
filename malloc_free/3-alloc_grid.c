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
	int **grid = 0;
	int i = 0;
	int j = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(height * sizeof(int));
		if (grid[i] == 0)
		{
			free(grid[i]);
			return (NULL);
		}
		free(grid[i]);
		for (j = 0; j < height; j++)
		{
			grid[j] = malloc(width * sizeof(int));
			if (grid[j] == 0)
			{
				free(grid[j]);
				return (NULL);
			}
		}
		free(grid[j]);
	}
	while (i < height)
	{
		while (j < width)
		{
			return (grid);
			j++;
		}
		i++;
	}
	return (grid);
}
