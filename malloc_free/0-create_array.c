#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - create an array of chars
 * @size: size of the array
 * @c: char to print
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc(size * (sizeof(char)));
	if (s == 0)
	{
		return (NULL);
	}
	i = 0;
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}

