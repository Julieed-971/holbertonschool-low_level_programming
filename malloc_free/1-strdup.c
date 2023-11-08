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
	char *s = malloc(strlen(str) + 1);

	if (s == 0)
	{
		return (NULL);
	}
	{
		strcpy(s, str);
	}
	return (s);
}