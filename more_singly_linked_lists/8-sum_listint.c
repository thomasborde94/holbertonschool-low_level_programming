#include "lists.h"

/**
 * sum_listint - returns sum of all data of a listint_t list
 * Description: returns sum of all data of a listint_t list
 * @head: list to go through
 * Return: sum of all data of a listint_t list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tempNode;

	if (head == NULL)
		return (0);
	tempNode = head;
	while (tempNode)
	{
		sum += tempNode->n;
		tempNode = tempNode->next;
	}
	return (sum);
}
