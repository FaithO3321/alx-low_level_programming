#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - Creates an array of integers
 * @min: The minimum value (inclusive)
 * @max: The maximum value (inclusive)
 * Return: A pointer to the newly created array
 * If min > max or if malloc fails, it returns NULL
 */
int *array_range(int min, int max)
{
	int *new_array;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	new_array = malloc(size * sizeof(int));
	if (new_array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)

	new_array[i] = min + i;

	return (new_array);
}
