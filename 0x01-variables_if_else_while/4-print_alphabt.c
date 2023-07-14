#include <stdio.h>
/**
  * main - Prints all letters except e and q
  *
  * Return: Always (Success)
  */
int main(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
	{
		if (b != 'e' && b != 'q')
		{
			putchar(b);
		}
	}

	putchar('\n');

	return (0);
}
