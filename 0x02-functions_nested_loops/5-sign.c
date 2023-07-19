#include "main.h"
/**
 * print_sign - function tha prints the sign of a number
 * @n: the sign to print
 * Return: 1 is greater than 0 and -1 is less than 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
