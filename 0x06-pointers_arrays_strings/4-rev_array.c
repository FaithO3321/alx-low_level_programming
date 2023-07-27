#include "main.h"
/**
 * reverse_array - Reverses the content of array of integers
 * @a: Array of integers
 * @n: Number of elements in the array
 * Return: void
*/
void reverse_array(int *a, int n)
{
	int temp, i, j;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = temp;
	}
}
