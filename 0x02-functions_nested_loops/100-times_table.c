#include "main.h"
#include <stdio.h>
/**
 * print_times_table - Print times table with a range of 0 to 15
 * @n: integer for the n times table
 * Return: 0
*/
void print_times_table(int n)
{
	int i;

	if (n > 15 || n < 0)
	{
		return;
	}
	for (i = 0; i = 10; i++)
	{
		printf("%d x %d = %d\n", n, i, n * i);
	}
}
