#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at given index
 * Description: deletes the node at given index
 * @head: pointer to list
 * @index: position of the node to delete
 * Return: 1 if succeded, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tempNode, *prevNode;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);
	tempNode = *head;

	while (i < index - 1)
	{
		if (tempNode == NULL || tempNode->next == NULL)
			return (-1);
		tempNode = tempNode->next;
		i++;
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(tempNode);
		return (1);
	}
	prevNode = tempNode->next;
	tempNode->next = prevNode->next;
	free(prevNode);
	return (1);
}
