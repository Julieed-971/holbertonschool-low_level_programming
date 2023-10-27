#include "main.h"

/**
 * *leet - Function that encodes a string into 1337
 * @s: pointer to a string
 * Return: char
 */
char *leet(char *s)
{
	int i = 0;
	int j = 0;
	char a[5] = {'a', 'e', 'o', 't', 'l'};
	char b[5] = {'A', 'E', 'O', 'T', 'L'};
	char c[5] = {'4', '3', '0', '7', '1'};

	while (s[i] != '\0')
	{
		for (j = 0; (a[j] != '\0') && (b[j] != '\0') && (c[j] != '\0'); j++)
		{
			if (s[i] == a[j] || s[i] == b[j])
			{
				s[i] = c[j];
			}
		}
		i++;
	}
	return (s);
}
