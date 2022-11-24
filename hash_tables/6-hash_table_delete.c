#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * Description: deletes a hash table
 * @ht: the hash table.
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *tmp;
	unsigned long int i;

	i = 0;
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				tmp = node;
				node = node->next;
				free(tmp->key);
				free(tmp->value);
				free(tmp);
			}
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
