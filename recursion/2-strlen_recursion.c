#include "main.h"

/**
 * _strlen_recursion(char *s) - function that return length
 * of a string
 * Description: returns the length of a string
 * @s: string to return the length of
 * Return: int length of s
 */

int _strlen_recursion(char *s)
{
	int i;

	if (*s == '\0')
		return (i);

	else if (*s == s[0])
	{
		i = 0;
		_strlen_recursion(s + 1);
	}
	
	else
	{
		i++;
		_strlen_recursion(s + 1);
	}
	return (0);
}
