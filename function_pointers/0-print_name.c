#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * Description: prints a name
 * @name: name to print
 * @f: function to point to
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
