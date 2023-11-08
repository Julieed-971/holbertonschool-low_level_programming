#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned int
 * Return: pointer to an int
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(sizeof(b));

	if (p == NULL)
	{
		free(b);
		exit(98);
	}
	return (p);
}
