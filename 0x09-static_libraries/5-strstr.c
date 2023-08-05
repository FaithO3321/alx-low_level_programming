#include "main.h"
#include <stddef.h>
/**
 * _strstr - Locates a substring
 * @haystack: The string to be searched
 * @needle: The substring to be located
 * Return: Pointer to the beginning of the located substring or,
 * NULL if the string is not found
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	if (*needle == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;
		k = i;

		while (haystack[k] == needle[j])
		{
			if (needle[j + 1] == '\0')
				return (&haystack[i]);
			j++;
			k++;
		}
	}

	return (NULL);
}
