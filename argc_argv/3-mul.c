#include <stdio.h>

/**
 * main - prints result of multiplication
 * Description: prints result of multiplication
 * @argc: argc
 * @argv: argv
 * Return: 0, 1 if not two arguments
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int prod;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 0; i < argc; i++)
		prod += atoi(argv[i]);
	printf("%d\n", prod);

	return (0);
}
