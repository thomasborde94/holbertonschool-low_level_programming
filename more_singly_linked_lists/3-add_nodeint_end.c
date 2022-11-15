#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * Description: adds a new node at the end of a list
 * @head: pointer to head of the list
 * @n: int value for new node
 * Return: pointer to adress of new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *tempNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	else
	{
		tempNode = *head;
		while (tempNode->next)
			tempNode = tempNode->next;
		tempNode->next = newNode;
		return (newNode);
	}
	return (NULL);
}
