#include "main.h"
/**
 * _strncpy - Copies a string not more than n bytes
 * @dest: Pointer to the destination string
 * @src: Pointer to the sources string
 * @n: Maximun number of bytes to be used from src
 * Return: Pointer to the resulting string dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i]; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\n';

	return (dest);
}
