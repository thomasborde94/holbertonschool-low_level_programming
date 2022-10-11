#include "main.h"

/**
 * _strcmp - compares two strings
 * Description: compares two string
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: comparaison of the strings as int
 */

int _strcmp(char *s1, char *s2)
{
	int i, j = 0;

	for (i = 0; s1[i] == s2[i] && s1[i] && s2[i]; i++)
	{
		if (s1[i] < s2[i])
			j--;

		if (s1[i] > s2[i])
			j++;

		if (s1[i] == s2[i])
			continue;
	}

	return (j);
}
