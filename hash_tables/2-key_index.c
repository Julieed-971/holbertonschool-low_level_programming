#include "hash_tables.h"

/**
 * key_index - return the index of a key
 * @key: key string to hash
 * @size: size of the array
 *
 * Return: index of the stored key/value
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = 0, key_index;

	hash_value = hash_djb2(key);
	key_index = hash_value % size;

	return (key_index);
}
