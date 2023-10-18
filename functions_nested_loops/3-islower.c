#include "main.h"

/**
 * _islower - Write a function that checks for lowercase character
 * @c: The character to check
 * Return: 1 if c is lowercase
 */
int _islower(int c)
{
	int tmp = 0;

	if (c >= 97 && c <= 122)
	{
	tmp = 1;
	}
	return (tmp);
}
