#include "main.h"
/**
 * _isalpha - Write a function that checks for alphabetic character
 * @c: The character to check
 * Return: 1 if c is a letter, lowercase or uppercase
 */
int _isalpha(int c)
{
	int tmp = 0;

	if ((c >= 65 && c <= 90) || (c >= 97 && c >= 122))
	{
		tmp = 1;
	}
	return (tmp);
}

