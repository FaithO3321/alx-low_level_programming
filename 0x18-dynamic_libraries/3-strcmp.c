#include "main.h"
/**
 * _strcmp - Compares two strings
 * @s1: The first string to be compared
 * @s2: The secnd string to be compared
 * Return: 0 if the strings are equal,
 * negative value if s1 is less than s2,
 * positive value if s1 is greater than s2
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
