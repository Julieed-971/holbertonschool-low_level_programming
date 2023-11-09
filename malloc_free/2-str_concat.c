#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: pointer to a string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, len1 = 0, len2 = 0;
	char *str;

	if (s1 == NULL)
	{
		s1 = ("");
	}
	if (s2 == NULL)
	{
		s2 = ("");
	}
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	str = malloc((len1 + len2 + 1) * sizeof(*str));
	if (str == 0)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		str[i] = s1[i];
	for (j = 0; j < len2; j++)
		str[i + j] = s2[j];

	str[i + j] = '\0';
	return (str);
}
