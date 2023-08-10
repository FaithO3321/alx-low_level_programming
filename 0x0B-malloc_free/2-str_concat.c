#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: pointer to new space in memory
*/
char *str_concat(char *s1, char *s2)
{
	int j;
	int s1length = 0;
	int s2length = 0;
	char *result;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (j = 0; s1[j] != '\0'; j++)
		s1length++;

	for (j = 0; s2[j] != '\0'; j++)
		s2length++;

	result = malloc(sizeof(char) * (s1length + s2length) + 1);

	if (result == NULL)
		return (NULL);

	for (j = 0; s1[j] != '\0'; j++)
		result[j] = s1[j];

	for (j = 0; s2[j] != '\0'; j++)
		result[s1length + j] = s2[j];

	return (result);
}
