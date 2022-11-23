#include "hash_tables.h"
#include <ctype.h>

/**
 * hash_djb2 - hash function implementing the djb2 algo
 * Description: hash function implementing the djb2 algo
 * @str: datat to send to hash table
 * Return: hash code
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned int hash = 5381;
	int c;

	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}

	return (hash);
}
