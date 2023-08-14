#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @n: number of bytes from s2
 * @s1: the first string
 * @s2: the second string
 * Return: pointer to concatenated string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenated;
	unsigned int len1 = 0, len2 = 0, concat_len = 0;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	concat_len = len1 + n + 1;

	concatenated = malloc(concat_len);
	if (concatenated == NULL)
		return (NULL);

	strcpy(concatenated, s1);
	strncat(concatenated, s2, n);

	return (concatenated);
}

