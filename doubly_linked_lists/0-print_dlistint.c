#include "lists.h"

/**
 * print_dlistint - prints all elements of a doubly linked list
 * Description: prints all elements of a doubly linked list
 * @h: list to print
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodeCount = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodeCount++;
		h = h->next;
	}
	return (nodeCount);
}
