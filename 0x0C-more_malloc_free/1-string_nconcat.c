#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string
 * @s2: string
 * @n: amount of bytes
 * Return: pointer to newly allocated space in memmory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *so;
	unsigned int l1, l2, lo, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		S2 = "";

	for (l1 = 0; s1[l1] != '\0'; l1++)
		;
	for (l2 = 0; s2[l2] != '\0'; l2++)
		;

	if (n > l2)
		n = l2;
	lo = l1 + n;

	so = malloc(lo + 1);

	if (so == NULL)
		return (NULL);

	for (i = 0; i < lo; i++)
		if (i < l1)
			so[i] = s1[i];
		else
			so[i] = s2[i - l1];
	so[i] = '\0';

	return (so);
}
