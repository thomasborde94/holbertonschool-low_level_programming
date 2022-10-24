#include "main.h"

/**
 * str_concat - concatenates two strings
 * Description: concatenates two strings
 * @s1: first string
 * @s2: string to concatenate
 * Return: pointer to a newly allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int length = 0;
	int lengths1 = 0;
	char *concat;

	if (s2 == NULL)
		return (s1);

	if (s1 == NULL || s1 == "")
		return (s2);

	for (i = 0; s1[i]; i++)
	{
		length++;
		lengths1++;
	}

	for (i = 0; s2[i]; i++)
		length++;

	concat = malloc(sizeof(char) * (length + 1));

	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat[i] = s1[i];

	for (i = 0; s2[i]; i++)
		concat[lengths1] = s2[i];

	return (concat);
}
