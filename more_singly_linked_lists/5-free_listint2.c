#include "lists.h"

/**
 * free_listint2 - frees a list
 * Description: frees a list and sets the head to null
 * @head: pointer to head of the list to free
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	head = NULL;
}
