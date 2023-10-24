#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - write a string and than reverse it
 * @s: pointer to a string
 */
void rev_string(char *s)
{
	int len = 0;
	int rev;
	int ver;
	char tmp;

	while (s[len] != '\0')
	{
		len++;
	}
	for (rev = 0, ver = len - 1; rev < ver; rev++, ver--)
	{
		tmp = s[rev];
		s[rev] = s[ver];
		s[ver] = tmp;
	}
}
