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
	if (grid != NULL && height != 0)
	{
		for (height = initialheight; height >= 0; height--)
		{
			free(grid[height]);
		free(grid);
		}
	}
}
