#include "calc.h"

/**
 * get_op_func - selects the correct function
 * Description: Selects the correct function to perform the
 * operation asked by the user
 * @s: operator given as parameter;
 * Return: pointer to the selected function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		i++;
		if (*(ops[i].op) == *s)
		    break;
	}

	return (ops[i].f);
}
