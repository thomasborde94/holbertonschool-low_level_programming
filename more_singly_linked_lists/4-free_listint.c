#include "lists.h"

/**
 * free_listint - frees a list
 * Description: frees a list
 * @head: pointer to list to free
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
