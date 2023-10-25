#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: pointer to a string
 * @src: pointer to a string
 * @n: max number of bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int i = 0;

	for (len = 0; dest[len] != '\0'; len++)
	{
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}
