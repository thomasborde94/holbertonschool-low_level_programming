#include "lists.h"

/**
 * print_list - prints all elements of the list_t list
 * Description: prints all elements of the list_t list
 * @h: list to print
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodeCount = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		nodeCount++;
		h = h->next;
	}
	return (nodeCount);
}
