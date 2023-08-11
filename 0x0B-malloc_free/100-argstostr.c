#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to a new string containing concatenated arguments,
 *         or NULL if ac == 0 or av == NULL or if memory allocation fails
 */
char *argstostr(int ac, char **av)
{
	int total_length = 0;
	int i, j;
	int index = 0;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
		total_length++;
	total_length++;
	}

	result = malloc(sizeof(char) * (total_length + 1));
	if (result == NULL)
	return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			result[index] = av[i][j];
			index++;
		}
		result[index] = '\n';
		index++;
	}
	result[index] = '\0';

	return (result);
}

