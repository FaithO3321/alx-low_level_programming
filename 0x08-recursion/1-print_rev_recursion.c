#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - prints string in reverse
 * @s: pointer to the string to be printed
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	putchar(*s);
}
