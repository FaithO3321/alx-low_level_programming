#include <stdio.h>
/**
  * main - Prints a hexadecimal string of base 16
  *
  * Return: Always (Success)
  */
int main(void)
{
	char b;

	for (b = '0'; b <= '9'; b++)
	{
		putchar(b);
	}

	for (b = 'A'; b <= 'F'; b++)
	{
		putchar(b);
	}

	putchar('\n');

	return (0);
}
