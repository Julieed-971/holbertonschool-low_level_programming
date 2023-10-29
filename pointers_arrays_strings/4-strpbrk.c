#include "main.h"

/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: pointer to a string
 * @accept: pointer to a string
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	if (*s == '\0' || *accept == '\0')
	{
	return ((char) 0);
	}
	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s);
			}
		}
		i++;
	}
	return ((char) 0);
}
