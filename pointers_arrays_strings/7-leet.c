#include "main.h"

/**
 * leet - encodes a string into 1337
 * Description: Letters a and A replaced by 4,
 * e and E by 3, o and O by 0, t and T by 7,
 * l and L by 1
 * @str: string to encode
 * Return: string encoded
 */

char *leet(char *str)
{
	int i;
	char toReplace[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char code[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (*str)
	{
		for (i = 0; i < 10; i++)
		{
			if (*s == toReplace[i])
				*s = code[i] + '0';
		}
	}
}
