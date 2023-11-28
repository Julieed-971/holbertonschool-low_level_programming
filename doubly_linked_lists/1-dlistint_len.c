#include "lists.h"

/**
 * dlistint_len - returns the number of elements of a doubly linked list
 * @h: pointer to the first node
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
