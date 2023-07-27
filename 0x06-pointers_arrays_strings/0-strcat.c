#include "main.h"
/**
 * strcat - function appends the src string to the dest string
 * @src: the string to be appended
 * @dest: the first string
 * Return: a pointer to the resulting string dest
*/
char *strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}
