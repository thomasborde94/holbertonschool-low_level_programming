#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table.
 * Description: deletes a hash table
 * @ht: the hash table.
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_table_t *head = ht;
	hash_node_t *temp, *item;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			item = ht->array[i];

			while (item != NULL)
			{
				temp = item->next;
				free(item->key);
				free(item->value);
				free(item);
				item = temp;
			}
		}
	}
	free(head->array);
	free(head);
}
