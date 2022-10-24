#include "main.h"

/**
 * free_grid - frees a 2D grid
 * Description: frees a 2d grid
 * @grid: grid to free
 * @height: size of the grid
 * Return: void
 */


void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
		free(grid[height]);

	free(grid);
}
