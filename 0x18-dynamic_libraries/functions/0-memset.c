#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @n: size of memory to print
 * @b: address of memory to print
 * @s: pointer to memory area
 * Return: a pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
