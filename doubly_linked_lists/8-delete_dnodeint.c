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

	for (i = 0; del != NULL && i < index; i++)
		del = del->next;
	if (del == NULL)
		return (-1);
	if (index == 0)
	{
		*head = del->next;
	}
	if (del == *head)
		*head = del->next;
	if (del->next != NULL)
		del->next->prev = del->prev;
	if (del->prev != NULL)
		del->prev->next = del->next;
	return (1);
}
