#include "lists.h"

/**
 * free_dlistint - free the nodes of a doubly linked list
 * @head: pointer to the first node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
