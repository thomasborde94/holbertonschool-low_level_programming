#include "lists.h"

/**
 * dlistint_len - returns number of elements
 * Description: returns number of elements
 * @h: list to go through
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t elementCount = 0;

	while (h)
	{
		elementCount++;
		h = h->next;
	}
	return (elementCount);
}
