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
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);
	char *str = (char *)malloc((len1 + len2) + sizeof(char));

	if (str == 0)
	{
		return (NULL);
	}
	strcpy(str, s1);
	strcat(str, s2);

	return (str);
}
