#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: pointer to a string
 * @s2: pointer to a string
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (len1 < len2)
		return (-15);
	else if (len1 > len2)
		return (15);
	else
		return (0);
}
