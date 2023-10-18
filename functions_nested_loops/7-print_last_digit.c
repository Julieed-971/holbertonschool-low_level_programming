#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @ld: the last digit to print
 * Return: The last digit
 */
int print_last_digit(int ld)
{
		int last_digit = ld % 10;

		if (last_digit < 0)
			last_digit *= -1;
		_putchar(last_digit + '0');
		return (last_digit);
}
