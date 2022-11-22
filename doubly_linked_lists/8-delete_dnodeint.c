#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at given position
 * Description: deletes a node at given position
 * @head: list to go through
 * @index: given position
 * Return: 1 if succeeded, else -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;

	if (*head == NULL)
		return (-1);

	while (index > 0)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
		index--;
	}
	if (temp->next == NULL)
		(*head)->prev = NULL;

	if (temp == *head)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	temp->prev->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
