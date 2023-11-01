#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * *_strstr - locates a substring
 * @haystack: pointer to a string
 * @needle: pointer to a string
 * Return: char
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	if (*haystack == '\0' || *needle == '\0')
	{
		return (NULL);
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				return (haystack + i);
			}
		}
	}
	return (NULL);
}
