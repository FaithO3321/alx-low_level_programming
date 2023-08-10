#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid previously created
 * @grid: array to be created
 * @height: number of raws
 * Return: Nothing
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	return (free(grid));
}
