#include "main.h"

/**
 * _strstr - finds first occurrence of a substring in a string
 * Description: Finds the first occurence of the substring
 * needle in the string haystack
 * @needle: substring
 * @haystack: where we search for the occurence
 * Return: pointer to the first occurence
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)/* tant qu'on arrive pas au NULL terminator */
	{
		char *begin = haystack;/* crée un pointer qui a comme valeur l'adresse de haystack*/
		char *pattern = needle;/* crée un pointer qui a comme valeur l'adresse de needle*/

		while (*haystack && *pattern && *haystack == *pattern)/*Si un character match un character de needle, on check le reste de la string*/
		{
			haystack++;
			pattern++;
		}

		if (!*pattern)
			return begin;

		haystack = begin + 1;
	}
	return (NULL);
}

