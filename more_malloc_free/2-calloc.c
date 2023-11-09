#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: number of bytes in the array
 * Return: pointer to a string
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p = malloc(size * nmemb);
	
	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	return (p);
}
