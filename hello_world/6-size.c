#include <stdio.h>

/**
 * main -Entry point
 * Description: prints the size of various types on the computer
 * Return: always 0
 */

int main(void)
{
	char charType;
	int intType;
	long int longintType;
	long long int longlongType;
	float floatType;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longintType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));

	return (0);
}
