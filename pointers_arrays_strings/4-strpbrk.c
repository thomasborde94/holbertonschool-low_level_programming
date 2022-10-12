#include "main.h"

/**
 * _strpbrk - searches a string for any of a set
 * of bytes
 * Description: scans string s and finds the first character in
 * the string s that matches any character specified in string accept
 * @s: string to scan
 * @accept: string containing the characters to match
 * Return: a pointer to the character, or null
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	
	if (s == NULL || accept == NULL)
		return (NULL);

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}

	return (NULL);
}
