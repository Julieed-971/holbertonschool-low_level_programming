#include "main.h"
#include <string.h>

/**
 * print_rev - write a string in reverse
 * @s: pointer to a char
 */
void print_rev(char *s)
{
	int length = strlen(s) - 1;
	int count;

	for (count = length; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
