#include "hash_tables.h"

/**
 * hash_table_create - creates an hash table
 * Description: creates an hash table of size size
 * @size: size of the hash table
 * Return: pointer to the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = malloc(sizeof(hash_table_t));
	unsigned long int i = 0;

	if (ht == NULL)
	{
		free(ht);
		return (NULL);
	}
	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);

	while (i < size)
	{
		ht->array[i] = NULL;
		i++;
	}

	return (ht);
}
