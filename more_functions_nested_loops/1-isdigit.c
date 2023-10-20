#include "main.h"

/**
 * _isdigit - Write a function that checks for a digit
 * @c: The character to check
 * Return: 1 if c is a digit
 */
int _isdigit(int c)
{
	if ((c >= 48 && c <= 57))
	{
		return (1);
	}
	return (0);
}
