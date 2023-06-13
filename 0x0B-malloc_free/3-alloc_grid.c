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
        int i;
        int j;
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
        for (i = 0; i < height; i++)
        {
                grid[i] = (int *)calloc(width, sizeof(int));

                if (grid[i] == NULL)
                {
                        for(j = 0; j < i; j++)
                        {
                                free(grid[j]);
                        }
                        free(grid);
                        return (NULL);
                }
        }
        return (grid);
}
