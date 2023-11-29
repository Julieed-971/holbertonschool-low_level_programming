#include "lists.h"

/**
 * get_dnodeint_at_index - return a specific node from a double linked list
 * @head: pointer to the first node
 * @index: node number to find and return
 *
 * Return: address to the head
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int i = 0;

	while (tmp != NULL)
	{
		if (tmp == NULL)
		{
			return (NULL);
		}
		else if (i == index)
		{
			return (tmp);
		}
		tmp = tmp->next;
		i++;
	}
	return (head);
}
