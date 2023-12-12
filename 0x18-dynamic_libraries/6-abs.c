#include "main.h"
/**
 * _abs - compute the absolute value of an integer
 * @i: inter number
 * Return: Absolute valueof integer
*/
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
	_putchar('\n');
}
