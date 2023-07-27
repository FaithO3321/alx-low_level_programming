#include "main.h"
/**
 * cap_string - Capitalizes all words of a string
 * @str: Input string
 * Return: Pointer to the resulting string
*/
char *cap_string(char *str)
{
	char separators[] = { || \t || \n || , || ; || . || ! || ? || " || () || {}};
	char *ptr = str;
	int i, capitalize_next = 1;

	while (*ptr != '\0')
	{
		if (capitalize_next && *ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 32;
		}
		for (i = 0; separators[i] != '\0'; i++)
		{
			if (*ptr == separators[i])
			{
			capitalize_next = 1;
			break;
			}
			else
			{
			capitalize_next = 0;
			}
		}
	}
	{
	ptr++;
	}
	return (str);
}
