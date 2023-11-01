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

	if (*needle == '\0')
	{
		return (haystack);
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
				{
					break;
				}
			}
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
	}
	return (NULL);
}
