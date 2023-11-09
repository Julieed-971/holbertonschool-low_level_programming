#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * _strdup - duplicate a string of char
 * @str: pointer to a string
 * Return: pointer to a string
 */

char *_strdup(char *str)
{
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	s = malloc(strlen(str) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	{
		strcpy(s, str);
	}
	return (s);
}
