#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * Description: prints a hash table
 * @ht: the hash table to print
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *item;
	char comma = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		item = ht->array[i];
		if (item != NULL)
		{
			if (comma == 1)
				printf(", ");

			while (item != NULL)
			{
				printf("'%s': '%s'", item->key, item->value);
				item = item->next;
				if (item != NULL)
					printf(", ");
			}
			comma = 1;
		}
	}
	printf("}\n");
}
