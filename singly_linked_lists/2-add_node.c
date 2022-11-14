#include "lists.h"
#include <string.h>

/**
 * add_node - adds a node at the beggining of a list
 * Description: adds a new node at the beginning of a list_t list
 * @head: head of the list
 * @str: str to add to new node
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	char *newStr;
	size_t newLen = 0;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newStr = strdup(str);
	if (newStr == NULL)
	{
		free(newNode);
		return (NULL);
	}

	for (newLen = 0; newStr[newLen];)
		newLen++;

	newNode->len = newLen;
	newNode->str = newStr;
	newNode->next = *head;
	return (newNode);
}
