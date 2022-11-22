#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning of the list
 * Description: adds a node at the beginning of the list
 * @head: the list
 * @n: value of the new node
 * Return: address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;
	(*head)->prev = newNode;
	*head = newNode;
	return (newNode);
}
