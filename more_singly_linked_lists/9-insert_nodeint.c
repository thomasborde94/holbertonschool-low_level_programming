#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at given position
 * Description: insert node at given position
 * @head: list to access
 * @idx: index of the list where the node should be added
 * @n: value of the new node
 * Return: adress of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *newNode, *tempNode;

	if (head == NULL)
		return (NULL);
	tempNode = *head;

	while (i < idx - 1)
	{
		if (tempNode == NULL || tempNode->next == NULL)
			return (NULL);
		tempNode = tempNode->next;
		i++;
	}

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = tempNode;
		*head = newNode;
		return (newNode);
	}
	newNode->next = tempNode->next;
	tempNode->next = newNode;
	return (newNode);
}
