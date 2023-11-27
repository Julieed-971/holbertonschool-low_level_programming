#include "lists.h"

/**
 * list_len - brings back the number elements of a list
 * @h: pointer to head of a list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
