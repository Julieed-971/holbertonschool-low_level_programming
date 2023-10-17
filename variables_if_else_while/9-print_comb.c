#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(x + '0');
		if (x < 9)
		{
			putchar(',');
			putchar(' ');
		}
		x++;
	}

	putchar('\n');

	return (0);
}
