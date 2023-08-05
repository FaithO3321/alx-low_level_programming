#include "main.h"
/**
 * _strncat - Concatenates two string with at most n bytes
 * @dest: Pointer to the destination string
 * @src: Pointer to the sources string
 * @n: Maximun number of bytes to be used from src
 * Return: Pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0, i;

	while (dest[dest_len])
		dest_len++;

	for (i = 0; i < n && src[i]; i++)
		dest[dest_len++] = src[i];

	dest[dest_len] = '\0';
	return (dest);
}
