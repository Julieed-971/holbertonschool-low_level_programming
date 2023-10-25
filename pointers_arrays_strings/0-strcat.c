#include "main.h"

/**
 * *_strcat - appends a string to another
 * @dest: pointer to a string
 * @src: pointer to a string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int len = 0;
	int i = 0;

	for (len = 0; dest[len] != '\0'; len++)
	{
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}
