#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to convert
 * Return: int
 */
int _atoi(char *s)
{
	int x = 0;
	int sign = 1;
	int res = 0;

	while (s[x] != '\0')
	{
		if (s[x] >= '0' && s[x] <= '9')
			break;

		else if (s[x] == '-')
			sign *= -1;
		x++;
	}
	while (s[x] >= '0' && s[x] <= '9')
	{
		res = (res * 10) + (s[x] - '0');
		x++;
		if (s[x] < '0' || s[x] > '9')
		{
			res *= sign;
			return (res);
		}
	}
	return (res);
}
