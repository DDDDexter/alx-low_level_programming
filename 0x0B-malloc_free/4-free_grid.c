#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* free_grid - frees 2d arr
* @grid: 2d grid
* @height: height dimen of grid
* Description: frees memo of grid
* Return: void
*/
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
