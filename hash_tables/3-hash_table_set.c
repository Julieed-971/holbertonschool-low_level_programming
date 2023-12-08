#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash_table to fill in
 * @key: the key to hash values
 * @value: the value to add in the hash table
 *
 * Return: 1 if succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *n_node, *tmp;
	unsigned long int index;

	if (!ht || !key || !value || !ht->array || !ht->size)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}

	n_node = malloc(sizeof(hash_node_t));

	if (n_node == NULL)
		return (0);

	n_node->key = strdup(key);
	n_node->value = strdup(value);
	n_node->next = ht->array[index];
	ht->array[index] = n_node;

	return (1);
}
