#include "main.h"
#include <stdio.h>
/**
 * main -Entry point
 * Description: A program that prints the sum of multiples of 3 and 5
 * Return: 0
*/
int main(void)
{
	int sum3 = 0, sum5 = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0)
		{
			sum3 += i;
		}
		if (i % 5 == 0)
		{
			sum5 += i;
		}
	}
	printf("%d\n", sum3, sum5);
	return (0);
}

