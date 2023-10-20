#include "main.h"

/**
 * _isupper - Write a function that checks for uppercase character
 * @c: The character to check
 * Return: 1 if c is uppercase
 */

int _isupper(int c)
	{
	int tmp = 0;

	if (c >= 65 && c <= 90)
	{
	tmp = 1;
	}
	return (tmp);
}
