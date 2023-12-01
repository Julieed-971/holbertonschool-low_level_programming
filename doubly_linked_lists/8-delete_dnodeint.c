#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node in a doubly linked list
 * @head: pointer to pointer to the first node of the list
 * @index: where the node should be delected
 *
 * Return: 1 if success -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *del = *head;
	dlistint_t *tmp;

	if (head == NULL || *head == NULL)
		return (-1);
	del = *head;

	if (index == 0)
	{
		*head = del->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(del->prev);
		return (1);
	}

	for (i = 0; del != NULL && i < index; i++)
		del = del->next;

	if (del == NULL)
		return (-1);

	tmp = del->prev;
	tmp->next = del->next;

	if (del->next != NULL)
		del->next->prev = tmp;
	
	free(del);

	return (1);
}
