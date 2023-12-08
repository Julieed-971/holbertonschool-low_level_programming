#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to a hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *tmp, *next;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			next = tmp->next;
			free(tmp->value);
			free(tmp->key);
			free(tmp);
			tmp = next;
		}
	}
	free(ht);
}
