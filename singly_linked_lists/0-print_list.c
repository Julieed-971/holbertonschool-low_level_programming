#include "lists.h"

/**
 * print_list - write the element of a singly linked list
 * @h: pointer to the first node
 *
 * Return: number of elements in the linked list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			count++;
			h = h->next;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			count++;
			h = h->next;
		}
	}
	return (count);
}
