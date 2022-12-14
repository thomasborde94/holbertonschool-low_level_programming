#include "lists.h"

/**
 * listint_len - returns number of elements in a linked list
 * Description: returns number of elements in a linked list
 * @h: pointer to head of the list
 * Return: number of elements in the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t elementCount = 0;

	while (h)
	{
		elementCount++;
		h = h->next;
	}
	return (elementCount);
}
