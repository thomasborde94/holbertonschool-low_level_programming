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

/**
 * delete_dnodeint_at_index - deletes a node at given position
 * Description: deletes a node at given position
 * @head: list to go through
 * @index: given position
 * Return: 1 if succeeded, else -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	size_t elementCount;

	if (*head == NULL)
		return (-1);
	if (temp == NULL)
		return (-1);

	elementCount = dlistint_len(*head);
	if (index > elementCount)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	while (index > 0)
	{
		temp = temp->next;
		index--;
	}

	temp->prev->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
