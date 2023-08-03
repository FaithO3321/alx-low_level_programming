#include "main.h"
#include <string.h>
/**
 * is_palindrome - checks if a string is palindrome
 * @s: the string to check
 * Return: 1 if string is palindrome,
 * 0 otherwise
*/
int is_palindrome(char *s)
{
	int length = strlen(s);

	if (length <= 1)
		return (1);

	if (s[0] != s[length - 1])
		return (0);

	s[length - 1] = '\0';

	return (is_palindrome(s + 1));
}
