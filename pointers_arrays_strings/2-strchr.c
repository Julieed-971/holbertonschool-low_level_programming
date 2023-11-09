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
	if (c == '\0')
		return ("");
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}

