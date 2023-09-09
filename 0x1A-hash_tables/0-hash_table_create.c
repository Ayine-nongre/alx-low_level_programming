#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: int val
 * Return: hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash;
	hash_node_t **array;

	new_hash = malloc(sizeof(hash_table_t));
	if (!new_hash)
	{
		free(new_hash);
		return (NULL);
	}

	array = malloc(sizeof(hash_node_t) * size);
	if (!array)
	{
		free(array);
		free(new_hash);
		return (NULL);
	}

	new_hash->array = array;
	new_hash->size = size;
	return (new_hash);
}
