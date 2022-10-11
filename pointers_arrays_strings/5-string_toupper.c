#include "main.h"

/**
 * string_toupper - changes lowercase to uppercase
 * Description: Changes all lowercase letters of a string
 * to uppercase
 * @str: the string to change
 * Return: a pointer to the changed string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		i++;
	}

	return (str);
}
