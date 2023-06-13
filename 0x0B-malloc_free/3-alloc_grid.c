#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that frees a 2 dimensional grid
 * @width: integer arrays
 * @height: second integer
 * Return: sucess
 */

int **alloc_grid(int width, int height)
{
	int x;
	int y;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		grid[x] = (int *)calloc(width, sizeof(int));
		if (grid[x] == NULL)
		{
			for ( y = 0; y < x; y++)
			{
				free(grid[y]);
			}
			free(grid);
			return (NULL);
		}
	}
	return (grid);
}
