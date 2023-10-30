#include "main.h"
#include <stddef.h>

/**
 * _puts_recursion - print a string
 * @s: pointer to a string
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
