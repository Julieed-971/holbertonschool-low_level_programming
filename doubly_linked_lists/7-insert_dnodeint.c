#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a new node at a given index
 * @h : pointer to a pointer to the head of a list
 * @idx: index where to insert the new node
 * @n: data to put in the new node
 *
 * Return: address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *tmp = *h, *ins_node;

	if (idx == 0)
	{
		ins_node = malloc(sizeof(dlistint_t));
		if (ins_node == NULL)
		{
			return (NULL);
		}
		ins_node->n = n;
		ins_node->prev = NULL;
		ins_node->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = ins_node;
		}
		*h = ins_node;
		return (ins_node);
	}
	for (i = 0; i < idx - 1 && tmp != NULL; i++)
		tmp = tmp->next;
	if (tmp == NULL)
		return (NULL);
	ins_node = malloc(sizeof(dlistint_t));
	if (ins_node == NULL)
	{
		return (NULL);
	}
	ins_node->n = n;
	ins_node->prev = tmp;
	ins_node->next = tmp->next;
	if (tmp->next != NULL)
	{
		tmp->next->prev = ins_node;
	}
	tmp->next = ins_node;
	return (ins_node);
}
