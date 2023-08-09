#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - creates an array of character c
 * @c: the chracter for array
 * @size: size of array
 * Return: 0
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
