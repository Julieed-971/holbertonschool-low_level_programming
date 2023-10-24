#include "main.h"

/**
 * puts2 - write avery other character
 * @str: pointer to a string
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i <= 9; i++)
		if ((i % 2 == 0))
		{
			_putchar(str[i]);
		}
	_putchar('\n');
}
