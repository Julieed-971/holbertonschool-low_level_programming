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
char a[] = {'\n', ' ', ',', '\t', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	while (s[i] != '\0')
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j] && (s[i + 1] > 'a' && s[i + 1] < 'z'))
			{
				s[i + 1] = s[i + 1] - 32;
			}
			else if (s[0] > 'a' && s[0] < 'z')
			{
				s[0] = s[0] - 32;
			}
		}
		i++;
	}
	return (s);
}
