#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenate two strings
 * @s1: pointer to a string
 * @s2: pointer to a string
 * @n: number of s2 bytes
 * Return: pointer to a string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = strlen(s1);
	unsigned int len2 = strlen(s2);
	char *str = malloc(sizeof(char) * (len1 + len2));

	if (str == NULL)
	{
		return (NULL);
	}
	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
		str[len1] = s1[len1];
	}
	for (len2 = 0; len2 < n && s2[len2] != '\0'; len2++)
	{
		str[len1 + len2] = s2[len2];
	}
	str[len1 + len2] = '\0';
	return (str);
}
