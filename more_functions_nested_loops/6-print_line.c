#include "main.h"

/**
 * print_line - write a straight line
 * @n: number to multiply the char by
 */
void print_line(int n)
{
	int i = 0;

	while (n > i)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
