#include "main.h"

/**
 * *_strcpy - copy the string from a pointer to another
 * * @src: pointer to a string
 * @dest: pointer to a buffer$
 * Return: *dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
