#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * strtow -  splits a string into two words
 * @str: the string to be split
 * Return: a pointer to an array of strings (words) or NULL,
 * if string is NULL or str is empty
 */
char **strtow(char *str)
{
	char **words, *temp;
	int i, j, k, word_count = 0, len = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			word_count++;
	}
	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	i = 0;
	while (*str != '\0')
	{
		while (*str == ' ')
			str++;
		temp = str;
		len = 0;
		while (*str != ' ' && *str != '\0')
		{
			len++;
			str++;
		}
		words[i] = malloc((len + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}
		for (k = 0; k < len; k++)
			words[i][k] = temp[k];
		words[i][k] = '\0';
		i++;
	}
	words[i] = NULL;
	return (words);
}
