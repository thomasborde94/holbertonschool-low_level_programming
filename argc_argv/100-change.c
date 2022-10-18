#include <stdio.h>
#include <stdlib.h>

int division(int change);
int reste(int change);

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
	int y = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) < 0)
		return (0);

	else
	{
		x += division(atoi(argv[1]));
		y = reste(atoi(argv[1]));
	}

	if (y != 0)
	{
		while (y != 0)
		{
			x+= division(y);
			y = reste(y);
		}
	}	

	printf("%d\n", x);
	
}

int reste(int change)
{
	int reste;

	if (change >= 25)
		reste = change % 25;

	else if (change >= 10)
		reste = change % 10;

	else if (change >= 5)
		reste = change % 5;

	else if (change >= 2)
		reste = change % 2;

	else if (change == 1)
		reste = 1;

	else if (change == 0)
		reste = 0;

	return (reste);
}

int division(int change)
{
	int division;

	if (change >= 25)
		division = change / 25;

	else if (change >= 10)
		division = change / 10;

	else if (change >= 5)
		division = change / 5;

	else if (change >= 2)
		division = change / 2;

	else if (change == 1)
		division = 1;

	else if (change == 0)
		division = 0;

	return (division);
}
