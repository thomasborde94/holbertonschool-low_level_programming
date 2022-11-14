#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a node at the end of a list
 * Description: adds a node at the end of a list
 * @head: head of the list
 * @str: string of the new node
 * Return: adress of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *tempNode;
	size_t newLen;
	char *newStr;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newStr = strdup(str);
	if (newStr == NULL)
	{
		free(newNode->next);
		return (NULL);
	}
	for (newLen = 0; newStr[newLen];)
		newLen++;

	newNode->str = newStr;
	newNode->len = newLen;
	newNode->next = NULL;

	tempNode = *head;
	while (tempNode->next)
		tempNode = tempNode->next;
	tempNode->next = newNode;
	return (tempNode);
}
