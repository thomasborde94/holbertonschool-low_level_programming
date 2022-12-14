#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of the list
 * Description: adds a new node at the end of the list
 * @head: the list
 * @n: value of the new node
 * Return: adress of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *tempNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = *head;
		*head = newNode;
		return (newNode);
	}
	else
	{
		tempNode = *head;
		while (tempNode->next)
			tempNode = tempNode->next;
		tempNode->next = newNode;
		newNode->prev = tempNode;
		return (newNode);
	}
	return (NULL);
}
