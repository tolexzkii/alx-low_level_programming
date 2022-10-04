#include "main.h"
#include <stdlib.h>

/**
 * _free_grid - frees a 2 dimensional grid
 * @grid: multidimensional array of char
 * @height: height of grid
 */
void _free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - splits a string into words
 * @str: string
 * Return: pointer of array of integers
 */
char **strtow(char *str)
{
	char **ao;
	unsigned int c, height, a, b, i;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	ao = malloc((height + 1) * sizeof(char *));
	if (ao == NULL || height == 0)
	{
		free(ao);
		return (NULL);
	}
	for (a = i = 0; a < height; a++)
	{
		for (c = i; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				i++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				ao[a] = malloc((c - i + 2) * sizeof(char));
				if (ao[a] == NULL)
				{
					_free_grid(ao, a);
					return (NULL);
				}
				break;
			}
		}
		for (b = 0; i <= c; i++, b++)
			ao[a][b] = str[i];
		ao[a][b] = '\0';
	}
	ao[a] = NULL;
	return (ao);
}
