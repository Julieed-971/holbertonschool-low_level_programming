#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to a string
 */
void puts_half(char *str)
{
	int len;
	int half;

	for (len = 0; str[len] != '\0'; len++)
	{
	}
	for (half = ((len + 1) / 2); half != len; half++)
	{
		_putchar(str[half]);
	}
	_putchar('\n');
}
