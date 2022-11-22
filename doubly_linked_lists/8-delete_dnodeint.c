#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at given position
 * Description: deletes a node at given position
 * @head: list to go through
 * @index: given position
 * Return: 1 if succeeded, else -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tempNode, *nextNode;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	tempNode = *head;
	if (tempNode == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(tempNode);
		return (1);
	}
	while (i < (index - 1))
	{
		if (tempNode->next == NULL)
			return (-1);
		tempNode = tempNode->next;
		i++;
	}
	nextNode = tempNode->next;
	tempNode->next = nextNode->next;
	tempNode->next->prev = tempNode;
	free(nextNode);
	return (1);
}
