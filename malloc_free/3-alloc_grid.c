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

	grid = malloc(height * sizeof(int *));

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	while (i < width)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == 0)
		{
			return (NULL);
			free(grid);
		}
	i++;
	}
	while (j < height)
	{
		grid[j] = malloc(height * sizeof(int));
		if (grid[j] == 0)
		{
			return (NULL);
			free(grid);
		}
	j++;
	}
	while (j < height)
	{
		while (i < width)
		{
		return (grid);
		}
		i++;
	j++;
}
	return (grid);
}
