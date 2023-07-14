#include <stdio.h>
/**
  * main - Prints numbers from 0 to 9 with a new line
  *
  * Return: Always (Success)
  */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
