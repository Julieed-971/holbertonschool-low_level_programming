#include "main.h"
#include <stddef.h>

/**
 * _print_rev_recursion - print a string in reverse
 * @s: pointer to a string
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
