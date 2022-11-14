#include "lists.h"

/**
 * free_list - frees a list
 * Description: frees a list
 * @head: list to free
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
