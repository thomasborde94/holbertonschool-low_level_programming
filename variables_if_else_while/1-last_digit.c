#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: prints last digit of n
 * Return: Always 0
*/

int main(void)
{
	int n, y;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	y = n % 10;
	if (y > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, y);
	}
	if (y == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, y);
	}
	if (y < 6 && !=0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, y);
	}
	return (0);
}
