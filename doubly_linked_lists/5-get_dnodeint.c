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

	if (head == NULL)
		return (NULL);

	while (tmp != NULL && i < index)
	{
		if (tmp == NULL)
		{
			return (NULL);
		}
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}
