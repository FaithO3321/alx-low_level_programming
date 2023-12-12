#include "main.h"
/**
 * _isalpha - Entry point
 * @c: The character to print
 * Return: 1 for lowercase or uppercase letter and 0 for the rest
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);

	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
