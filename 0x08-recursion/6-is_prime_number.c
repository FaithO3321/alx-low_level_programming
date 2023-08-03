#include "main.h"

int is_prime_helper(int n, int i);
int is_prime_number(int n);

/**
 * is_prime_helper - helper funtion to check for a prime number
 * @n: the number to be checked
 * @i: test divisor
 * Return: 1 for prime number, otherwise 0
*/
int is_prime_helper(int n, int i)
{
	if (i * i > n)
		return (1);
	else if (n % i == 0 || n % (i + 2) == 0)
		return (is_prime_helper(n, i + 6));
}

/**
 * is_prime_number - checks for a prime number
 * @n: the number to be checked
 * Return: 1 for prime number, otherwise 0
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n <= 3)
		return (1);
	else if (n % 2 == 0 || n % 3 == 0)
		return (0);
	return (is_prime_number(n, 5));
}
