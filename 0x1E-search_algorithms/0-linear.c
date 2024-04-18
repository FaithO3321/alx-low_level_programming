#include "search_algos.h"
#include <unistd.h>
/**
 * linear_search - searches for a value in an array of
 * integers using the linear search algorithm
 * @array: array to search the value in
 * @size: size of the array
 * @value: value to search
 * Return: the index of the found value.
 * or -1 if not found
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; ++i)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
