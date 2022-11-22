#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a doubly linked list
 * Description: returns the nth node of a doubly linked list
 * @head: the list
 * @index: node to return
 * Return: adress of the node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tempNode;

	if (head == NULL)
		return (NULL);

	tempNode = head;
	while (i < index && tempNode != NULL)
	{
		tempNode = tempNode->next;
		i++;
	}
	return (tempNode);
}
