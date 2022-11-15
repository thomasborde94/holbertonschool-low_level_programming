#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a linked list
 * Description: returns the nth node of a linked list
 * @head: linked list we access
 * @index: node to return
 * Return: pointer to nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tempNode;

	tempNode = head;
	while (i <= index && tempNode != NULL)
	{
		tempNode = tempNode->next;
		i++;
	}
	if (i != index)
		return (NULL);
	else
		return (i);
}
