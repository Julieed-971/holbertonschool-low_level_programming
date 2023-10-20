#include "main.h"

/**
 * print_diagonal - write a diagonal line
 * @n: number of times \ is printed
 */
void print_diagonal(int n)
{
	int i = 0;

	while (n > i)
	{
		_putchar(' ');
		i++;
	}
	_putchar('\\');
	_putchar('\n');
}
