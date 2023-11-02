#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * _strchr - locates a character in a string
 * @s: pointer to a string
 * @c: character to locate
 * Return: char
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	if (s[i] == '\0')
	{
		return (NULL);
	}

	while (s[i] != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
