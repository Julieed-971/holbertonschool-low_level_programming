#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: pointer to a destination string
 * @src: pointer to a source string
 * @n: number of bytes to copy
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}
