#include "main.h"

int find_if_prime(int n, int i);


/**
 * is_prime_number - tells if a number is prime or not
 * Description: tells if n is prime or not
 * @n: int n
 * Return: 1 if n is prime, else returns 0
 */

int is_prime_number(int n)
{
	return (find_if_prime(int n, 2));
}



/**
 * find_if_prime - tells if n is prime
 * Description: tells if n is prime
 * @n: int we want to know if it is prime number
 * @i: iterate int
 * Return: 1 if n is prime, else returns 0
 */

int find_if_prime(int n, int i)
{
	i = 2;

	if (n % i == 0 && i != 1)
		return (1);

	if (i > n)
		return (0);

	else
		return (find_if_prime(n i + 1));
}
