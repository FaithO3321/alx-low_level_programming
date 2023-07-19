#include "main.h"
/**
 * print_last_digit - Print the last digit of a number
 * @a: integer for input
 * Return: last digit
*/
int print_last_digit(int a)
{
	int l;

	l = a % 10;

	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (-l);
	}
	_putchar('\n');
}
