#include "hash_tables.h"
#include <string.h>


/**
 * create_item - creates an item to get into the hash table
 * Description: creates an item to get into the hash table
 * @key: key of the item
 * @value: value of the item
 * Return: pointer to the node of the item
 */

hash_node_t *create_item(const char *key, const char *value)
{
	hash_node_t *item = malloc(sizeof(hash_node_t));

	item->key = malloc(strlen(key) + 1);
	item->value = malloc(strlen(value) + 1);

	strcpy(item->key, key);
	strcpy(item->value, value);
	item->next = NULL;
	return (item);
}

/**
 * hash_table_set - adds an element to the hash table
 * Description: adds an element to the hash table
 * @ht: hash table we want to add an element to
 * @key: key of the element
 * @value: value associated with the key
 * Return: 1 if succeded, else return 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int long slot;
	hash_node_t *item, *existing, *temp;
	char *valueCopy;

	if (key == NULL || ht == NULL || value == NULL)
		return (0);

	valueCopy = strdup(value);
	slot = key_index((const unsigned char *)key, ht->size);
	item = ht->array[slot];
	if (item == NULL)
	{
		ht->array[slot] = create_item(key, valueCopy);
		return (1);
	}
	while (item != NULL)
	{
		if (strcmp(item->key, key) == 0)
		{
			free(item->value);
			item->value = malloc(strlen(value) + 1);
			strcpy(item->value, value);
			return (1);
		}
		existing = item;
		item = existing->next;

	}
	temp = create_item(key, valueCopy);
	item = temp;
	item->next = ht->array[slot];
	return (1);
}
