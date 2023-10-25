#include "main.h"

/**
 * *_strncpy - copy a string
 * @dest: pointer to a string
 * @src: pointer to a string
 * @n: most number of src bytes
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
