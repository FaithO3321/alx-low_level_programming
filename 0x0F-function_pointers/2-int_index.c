#include "function_pointers.h"
/**
 * is_even - comparison to check if number is even
 * @num: number to be checked
 */
int is_even(int num)
{
	return (num % 2 == 0);
}

/**
 * int_index - returns the index of the first element
 * for which the cmp function does not return 0
 * @array: array to be searched
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: -1 if no match, size is less or equal to 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
