#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - adds positive numbers
 * Description: adds positive numbers
 * @argc: argc
 * @argv: argv
 * Return: 1 if number contains symbols that are not digits
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int symbol;
	int sum;

	if (argc == 1)
		printf("0\n");

	else
	{
		for (i = 1; i < argc; i++)
		{
			for (symbol = 0; argv[i][symbol]; symbol++)
			{
				if (argv[i][symbol] < 48 || argv[i][symbol] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
	}

	printf("%d\n", sum);

	return (0);
}
