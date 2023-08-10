#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: colums
 * @height: raws
 * Return: pointer to 2d array
*/
int **alloc_grid(int width, int height)
{
	int **result;
	int j, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	result = malloc(sizeof(int *) * height);

	if (result == NULL)
		return (NULL);

	for (k = 0; k < height; k++)
	{
		result[k] = malloc(sizeof(int) * width);

		if (result[k] == NULL)
		{
			free(result);
			for (j = 0; j <= height; j++)
				free(result[j]);
			return (NULL);
		}
		for (j = 0; j <= width; j++)
			result[k][j] = 0;
	}
	return (result);
}
