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
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	char *str = NULL;
	unsigned int i, j;

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	str = malloc(sizeof(char) * (len1 + len2));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		str[i] = s1[i];
	}
	if (n >= len2)
	{
		n = len2;
	}
	for (j = 0; j < n; j++)
	{
		str[i + j] = s2[j];
	}
	str[i + j] = '\0';
	return (str);
}
