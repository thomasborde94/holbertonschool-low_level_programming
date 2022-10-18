#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints result of multiplication
 * Description: prints result of multiplication
 * @argc: argc
 * @argv: argv
 * Return: 0, 1 if not two arguments
 */

int main(int argc, char *argv[])
{
	int prod;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	prod = atoi(argv[1]) * atoi(argv[2];
	printf("%d\n", prod);

	return (0);
}
