#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * Description: gives the index of a key
 * @key: the key to enter
 * @size: size of the array of the hash table
 * Return: index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	index = index % size;
	return (index);
}
