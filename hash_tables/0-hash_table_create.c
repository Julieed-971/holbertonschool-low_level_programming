#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *my_hash_table = malloc(sizeof(hash_node_t) * size);

	if (my_hash_table == NULL)
		return (NULL);
	return (my_hash_table);
}
