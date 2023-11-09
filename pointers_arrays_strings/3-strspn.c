#include "main.h"

/**
 * _strspn - write the length of a prefix substring
 * @s: pointer to a string
 * @accept: pointer to a string
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int count = 0;

	while (*s != '\0')
	{
		i = 0;
		while (accept[i] != *s && accept[i] != '\0')
		{
			i++;
		}
		if (accept[i] == *s && accept[i] != '\0')
			count++;
		if (accept[i] == '\0' && accept[i] != *s)
			return (count);
		s++;
	}
	return (count);
}
