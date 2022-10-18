#include <stdio.h>
#include <stdlib.h>

int changeE(int change);

/**
 * main - prints the minimum number of coins to make change
 * for an amount of money.
 * Description: prints the minimum number of coins to make
 * change for an amount of money.
 * @argc: argc
 * @argv: argv
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a = 1;
	int b = 2;
	int c = 5;
	int d = 10;
	int e = 25;
	int x = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) < 0)
		return (0);

	if (atoi(argv[1]) >= e)
	{
		e += changeE(atoi(argv[1]));
	}

	printf("%d\n", x);
	
}

int changeE(int change)
{
	int e;
	
	e = change / 25;
	return (e);
}
