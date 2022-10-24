#include "main.h"

/**
 * _strdup - copies a string
 * Description: copies a string given as parameter
 * @str: string to copy
 * Return: pointer to a newly allocated space in memory,
 * which contains a copy of the string given as parameter
 */

char *_strdup(char *str)
{
	int i = 0;
	int length = 0;
	char dup;

	if (str == NULL)
		return (NULL);

	for (i; str[i]; i++)
		length++;

	dup = malloc(sizeof(char) * (length + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		dup[i] = str[i];

	dup[length] = '\0';

	return (dup);
}
