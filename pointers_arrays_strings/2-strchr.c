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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	{
		if (c == '\0')
		{
			while (*s != '\0')
			{
				s++;
			}
		}
		return (s);
	}
	return (NULL);
}
