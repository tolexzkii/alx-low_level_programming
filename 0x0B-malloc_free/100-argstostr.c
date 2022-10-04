#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of my program
 * @ac: argument counter
 * @av: argument vector
 * Return: pointer of array of char
 */
char *argstostr(int ac, char **av)
{
	char *ao;
	int c, a, b, i;

	if (ac == 0)
		return (NULL);

	for (c = a = 0; a < ac; a++)
	{
		if (av[a] == NULL)
			return (NULL);

		for (b = 0; av[a][b] != '\0'; b++)
			c++;
		c++;
	}

	ao = malloc((c + 1) * sizeof(char));

	if (ao == NULL)
	{
		free(ao);
		return (NULL);
	}

	for (a = b = i = 0; i < c; b++, i++)
	{
		if (av[a][b] == '\0')
		{
			ao[i] = '\n';
			a++;
			i++;
			b = 0;
		}
		if (i < c - 1)
			ao[i] = av[a][b];
	}
	ao[i] = '\0';

	return (ao);
}
