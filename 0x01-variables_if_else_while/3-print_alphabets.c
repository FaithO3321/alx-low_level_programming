#include <stdio.h>
/**
 * main - Program that priints the alphabets in lower and upper case
 *
 * Return: Always (Success)
 */
int main(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
	{
		putchar(b);
	}

	for (b = 'A'; b <= 'Z'; b++)
	{
		putchar(b);
	}

	putchar('\n');

	return (0);
}
