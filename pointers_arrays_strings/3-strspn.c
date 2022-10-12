#include "main.h"

/**
 * _strspn - returns length of a string made only
 * of characters contained in another string
 * Description: Returns inital length of string s written
 * only with accept characters
 * @s: string to check
 * @accept: characters accepted
 * Return: numbers of characters in s which consist
 * only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				count++;
				break;
			}

			else
				return (count);
			
		}
		s++;
	}

	return (count);
}
