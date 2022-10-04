#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: pointer of array of integers
 */
int **alloc_grid(int width, int height)
{
	int **grid_o;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	grid_o = malloc(height * sizeof(int *));
	if (grid_o == NULL)
	{
		free(grid_o);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid_o[i] = malloc(width * sizeof(int));
		if (grid_o[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grid_o[i]);
			free(grid_o);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid_o[i][j] = 0;

	return (grid_o);
}
