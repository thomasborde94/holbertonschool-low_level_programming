#include "lists.h"

size_t print_list(const list_t *h)
{
	size_t nodeCount = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");

		else
			printf("[%d] %s", h->len, h->str);

		nodeCount++;
		h = h->next;
	}
	return (nodeCount);
}
