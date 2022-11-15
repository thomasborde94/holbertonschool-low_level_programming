#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * Description: deletes the head node of a linked list
 * @head: pointer to head of the list to delete
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	int tempn;
	listint_t *tempNode;

	tempNode = *head;
	tempn = tempNode->n;
	*head = (*head)->next;
	free(tempNode);
	return (tempn);
}
