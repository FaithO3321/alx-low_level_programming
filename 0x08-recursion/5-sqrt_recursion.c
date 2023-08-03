#include "main.h"

int _sqrt_recursion(int n);
int _sqrt_recursive(int n);
/**
 * _sqrt_recursive - checks for the recurvise square root
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to calculate the square root of
 * Return: the natural square root of n,
 * or -1 if n does not have a natural square root
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (_sqrt_recursive(n, 0));
}
