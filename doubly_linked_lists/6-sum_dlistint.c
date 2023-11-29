#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of a doubly linked list
 * @head: pointer to the first node
 *
 * Return: the sum of all data
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	unsigned int i = 0;
	unsigned int sum = 0;

	if (head == NULL)
		return (0);
	while (tmp != NULL)
	{
		if (tmp == NULL)
		{
			return (0);
		}
		else
		{
			sum += tmp->n;
		}
		i++;
		tmp = tmp->next;
	}
	return (sum);
}
