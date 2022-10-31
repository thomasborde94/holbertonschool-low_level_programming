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
	int result, num1, num2;
	char *op;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];
	
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (*op != "+" || *op != "-" || *op != '*' || *op != '/' || *op != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if(*op == '/' && num2 == "0" || *op == '%' && num2 == "0")
	{
		printf("Error\n");
		exit(100);
	}

	result = get_op_func(operator)(num1, num2);
	printf("%d\n", result);
	return (0);
}
