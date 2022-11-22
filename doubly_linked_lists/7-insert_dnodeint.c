#include "lists.h"

/**
 * insert_dnodeint_at_index - adds a node at given position
 * Description: adds a node at given position
 * @h: list to go through
 * @idx: index of the new node
 * @n: value of the new node
 * Return: adress of the new node, Null if it failed, 0
 * if not possible to add the node at index idx
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *newNode, *tempNode;

	if (h == NULL)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->n = n;
	tempNode = *h;

	if (idx == 0)
	{
		add_dnodeint(h, n);
	}
	while (i < (idx - 1))
	{
		if (tempNode == NULL || tempNode->next == NULL)
			return (NULL);
		tempNode = tempNode->next;
		i++;
	}
	newNode->next = tempNode->next;
	newNode->prev = tempNode;
	tempNode->next->prev = newNode;
	tempNode->next = newNode;

	return (newNode);
}
