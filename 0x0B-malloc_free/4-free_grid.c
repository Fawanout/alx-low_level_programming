#include "main.h"

/**
 * free_grid - frees a 2dimensional grid
 * @grid: grid of memory
 * @height: input
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
