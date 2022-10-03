#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: stored char
 * Return: pointer of array to chars
 */
char *create_array(unsigned int size, char c)
{
	char *ce;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ce = malloc(sizeof(c) * size);

	if (ce == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ce[i] = c;

	return (ce);
}
