#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * Description: concatenates two strings
 * @s1: first string
 * @s2: string to concatenate
 * @n: number of bytes of s2 to concatenate
 * Return: pointer to a newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	int length = 0;
	int lengths1 = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
	{
		length++;
		lengths1++;
	}

	for (i = 0; s2[i]; i++)
		length++;

	concat = malloc(sizeof(char) * (length + 1));

	if (concat != NULL)
	{
		for (i = 0; s1[i]; i++)
			concat[i] = s1[i];

		for (i = 0; s2[i]; i++)
		{
			if (i < n)
				concat[lengths1++] = s2[i];
			break;
		}

		return (concat);
	}
	else
		return (NULL);
}
