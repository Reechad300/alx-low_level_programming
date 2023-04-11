#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free grid
 * @grid: parameter 1
 * @height: parameter 2
 * Return: always 0
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
