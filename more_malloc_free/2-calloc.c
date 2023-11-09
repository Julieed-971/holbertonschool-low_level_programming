#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: number of bytes in the array
 * Return: pointer to a string
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p = 0;
	unsigned int x;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(size * nmemb);
	if (p == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < (nmemb * size); x++)
	{
		p[x] = 0;
	}
	return (p);
}
