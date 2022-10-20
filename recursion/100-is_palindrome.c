#include "main.h"

int _strlen_recursion(char *s);
int find_if_palindrome(char *s, int length, int i);

/**
 * is_palindrome - tells if string is palindrome
 * Description: tells if string is a palindrome
 * @s: string we want to know if it is a palindrome
 * Return: 1 if s is palindrome, else return 0
 */

int is_palindrome(char *s)
{
	return (find_if_palindrome(s, length, 0);
}

/**
 * _strlen_recursion - function that return length
 * of a string
 * Description: returns the length of a string
 * @s: string to return the length of
 * Return: int length of s
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s == '\0')
		return (0);

	else
	{
		length =  _strlen_recursion(s + 1);
		length++;
	}
	return (length);
}

/**
 * find_if_palindrome - tells if a string is a palindrome
 * Description: tells if a string is a palindrome
 * @s: string to check
 * @length: length of the string
 * @i: iterative int
 * Return: 1 if s is palindrome, else returns 0
 */

int find_if_palindrome(char *s, int length, int i)
{
	length = _strlen_recursion(s);

	if (s[i] == s[length - i - 1])
		{
			if (i == length - 1)
			{
				return (1);
			}
			return (find_if_palindrome(s, length, i + 1));
		}

	else
		return (0);
}
