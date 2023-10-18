#include "main.h"

/**
 * _islower - Write a function that checks for lowercase character
 * @c: The character to check
 * Return: 1 if c is lowercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	_putchar('1');
	}
	else
	{
	_putchar('0');
	}
	return (0);
}
