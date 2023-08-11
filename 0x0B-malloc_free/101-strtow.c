#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * strtow - splits a string into words
 * @str: the string to split
 * Return: pointer to an array of strings (words),
 * or NULL if str is NULL or empty
 */
char **strtow(char *str)
{
	int wordcount = 0, inword = 0, i = 0;
	char **words = NULL, *wordstart = NULL, *p = str;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (; *p != '\0'; p++)
		if (*p == ' ' && inword && (inword = 0))
			word_count++;
		else if (*p != ' ' && !in_word && (in_word = 1))
			word_start = p;
	if (in_word)
		word_count++;

	words = malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
		return (NULL);

	for (p = str; *p != '\0'; p++)
		if (*p == ' ' && in_word && (in_word = 0))
			*p = '\0', words[i++] = word_start;
		else if (*p != ' ' && !in_word && (in_word = 1))
			word_start = p;
	if (in_word)
		words[i++] = word_start;
		words[i] = NULL;

	return (words);
}
