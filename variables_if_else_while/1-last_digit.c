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
	int n;
	int y = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
/* your code goes there */
	if (y > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, y);
	}
	else if (y == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, y);
	}
	else if (y < 6 && y != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, y);
	}
	return (0);
}
