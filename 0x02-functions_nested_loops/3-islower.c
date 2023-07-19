#include "main.h"
/**
 * _islower - Entry point
 * @c: The character to print
 * Return: 1 for lowercase character and 0 for the rest
*/
int _islower(int c)
{
	int c;

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	_putchar('\n');
}
