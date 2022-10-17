#include "main.h"

/**
 * _strlen_recursion - function that return length
 * of a string
 * Description: returns the length of a string
 * @s: string to return the length of
 * Return: int length of s
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
		return (0);

	else
	{
		_strlen_recursion(s + 1);
		i++;
	}
	return (i);
}
