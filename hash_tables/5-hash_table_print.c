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
		if (item == NULL)
			continue;
		for (;;)
		{
			if (comma == 1)
				printf(", ");
			printf("'%s' : '%s'", item->key, item->value);
			if (item->next == NULL)
				break;
		}
		item = item->next;
		comma = 1;
	}
	printf("}\n");
}
