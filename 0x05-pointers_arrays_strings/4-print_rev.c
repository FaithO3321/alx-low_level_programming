#include "main.h"
#include <stdio.h>
/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	if (*s)
	{
		(s - 1);
		printf("%c\n", *s);
	}
}
