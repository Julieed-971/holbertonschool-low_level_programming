#include "main.h"

/**
 * reverse_array - reverse the content of an array
 * @a: pointer to a string
 * @n: number of elements of the array
 * Return: int
 */

void reverse_array(int *a, int n)
{
	int rev;
	int ver;
	int tmp;

	for (rev = 0, ver = n - 1; rev < ver; rev++, ver--)
	{
		tmp = a[rev];
		a[rev] = a[ver];
		a[ver] = tmp;
	}
}
