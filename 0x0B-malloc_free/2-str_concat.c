#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string
 * @s2: string
 * Return: pointer of array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *ostr;
	unsigned int i, j, k, lim;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	ostr = malloc(sizeof(char) * (i + j + 1));

	if (ostr == NULL)
	{
		free(ostr);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		ostr[k] = s1[k];

	lim = j;
	for (j = 0; j <= lim; k++, j++)
		ostr[k] = s2[j];

	return (ostr);
}
