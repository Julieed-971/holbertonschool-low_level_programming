#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * print_chessboard - print the chessboard
 * @a: pointer to a string of char
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	for (j = 0; j < 8; j++)
	{
		for (i = 0; i < 8; i++)
		{
			_putchar (a[j][i]);
		}
	_putchar ('\n');
	}
}
