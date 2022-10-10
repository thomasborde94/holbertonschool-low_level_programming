#include "main.h"

/**
 * _strlen - returns length of a string
 * Description: returns the length of a string
 * @s: string to return the length of
 * Return: string's length as int
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}
