#include "function_pointers.h"
/**
 * print_int - example action function to print an integer
 * @num: integer to be printed
 */
void print_int(int num)
{
	printf("%d ", num);
}

/**
 * square_and_print - action function to square an integer and print
 * @num: number to be printed
 */
void square_and_print(int num)
{
	printf("%d^2 = %d\n", num, num * num);
}

/**
 * array_iterator - function prototype for iterartion
 * @array: array to be iterated
 * @size: array size
 * @action: pointer to the function you need to use
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
