#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * Description: retrieves a value associated with a key
 * @ht: the hash table
 * @key: the key
 * Return: value associated with the element, or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int long slot;
	hash_node_t *item;

	if (ht == NULL || key == NULL)
		return (NULL);

	slot = key_index((const unsigned char *)key, ht->size);
	item = ht->array[slot];

	if (item == NULL)
		return (NULL);

	while (item != NULL)
	{
		if (strcmp(item->key, key) == 0)
			return (item->value);
		item = item->next;
	}
	return (NULL);
}
