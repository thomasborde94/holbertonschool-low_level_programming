#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning of a list
 * Description: adds a node a the beginning of a list
 * @head: pointer to head of the list
 * @n: value to assign to the node
 * Return: pointer to adress of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
