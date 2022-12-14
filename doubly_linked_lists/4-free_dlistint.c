#include "lists.h"

/**
 * free_dlistint - frees a list
 * Description: frees a list
 * @head: list to free
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
