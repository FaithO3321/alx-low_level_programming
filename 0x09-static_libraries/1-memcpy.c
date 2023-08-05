#include "main.h"
/**
 * _memcpy - function that pcopies memory area
 * @src: source of memory
 * @dest: destinantion of memory
 * @n: size of memory
 * Return: a pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
