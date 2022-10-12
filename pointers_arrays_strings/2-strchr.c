#include "main.h"

/**
 * _strchr - locates first occurence of a character
 * in a string
 * Description: Locates the first occurence of a character
 * in a string
 * @s: string we search in
 * @c: character we search for
 * Return: a pointer to the first occurence of the character, or
 * NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;

		if (c == '\0')
			return (NULL);
	}

	return (NULL);
}
