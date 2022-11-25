#include "hash_tables.h"
#include <string.h>


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
	hash_node_t *new;
	char *copy_value;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	copy_value = strdup(value);
	if (copy_value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = copy_value;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}

	new->value = copy_value;
	new->next  = ht->array[index];

	ht->array[index] = new;

	return (1);
}
