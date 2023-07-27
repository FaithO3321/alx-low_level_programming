#include "main.h"
/**
 * strcat - Function that concatenates two strings
 * @src: pointer to the sources string
 * @dest: pointer to the detination
 * Return: a pointer to the resulting string dest
*/
char *strcat(char *dest, char *src)
{
	int dest_len = 0, i;

	while (dest[dest_len])
		dest_len++;

	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
