#include "lists.h"

/**
 * list_len - return number of elements of the list
 * Description: retrurn number of elements of the list
 * @h: list to go through
 * Return: number of elements in list h
 */

size_t list_len(const list_t *h)
{
	size_t elementCount = 0;

	while (h != NULL)
	{
		elementCount++;
		h = h->next;
	}
	return (elementCount);
}
