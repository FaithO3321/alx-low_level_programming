#include <stdio.h>
/**
  * main - Prints the reverse of alphabets
  *
  * Return: Always (Success)
  */
int main(void)
{
	char b;

	for (b = 'z'; b >= 'a'; b--)
	{
		putchar(b);
	}

	putchar('\n');

	return (0);
}
