#include "main.h"

/**
 * _strspn - write the length of a prefix substring
 * @s: pointer to a string
 * @accept: pointer to a string
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	unsigned int i = 0;
	unsigned int j = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
			}
		}
		i++;
	}
	return (len);
}
