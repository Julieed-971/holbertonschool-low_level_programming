#include "main.h"

/**
 * *cap_string - capitalize all words of a string
 * @s: pointer to a string
 * Return: char
 */

char *cap_string(char *s)
{
	int i = 0;
	int j = 0;
	char a[6] = {' ', '\t', '\n', '"', '(', '{'};
	char b[7] = {'.', '!', '?', ',', ';', ')', '}'};

	while (s[i] != '\0')
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j] && (s[i] <= 'A' || s[i] >= 'Z'))
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
		for (j = 0; b[j] != '\0'; j++)
		{
			if (s[i] == b[j] && (s[i] <= 'A' || s[i] >= 'Z'))
			{
				s[i + 2] = s[i + 2] - 32;
			}
		}
		i++;
	}
	return (s);
}
