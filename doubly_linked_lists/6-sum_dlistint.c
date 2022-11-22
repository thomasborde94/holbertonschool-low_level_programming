#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of a list
 * Description: returns the sum of all the data of a list
 * @head: list to go through
 * Return: sum of all data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *tempNode;

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
