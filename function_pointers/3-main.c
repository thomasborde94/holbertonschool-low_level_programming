#include "3-calc.h"

/**
 * main - main
 * Description: main function
 * Return: Always 0, but
 * If the number of args is wrong, exit status 98
 * If the operator is not correct, exit status 99
 * If trying to divide or % by 0, exit status 100
 */

int main(int argc,char *argv[])
{
	int result;
	char *operator;

	operator = argv[2];
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (*operator != "+" || *operator != "-" || *operator != '*' || *operator != '/' || *operator != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if(*operator == '/' && *argv[3] == "0" || *operator == '%' && *argv[3] == "0")
	{
		printf("Error\n");
		exit(100);
	}

	result = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
