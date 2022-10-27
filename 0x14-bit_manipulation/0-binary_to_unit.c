#include "main.h"

/**
 * binary_to_uint - converts a binary number to
 * unsigned int
 * @b: binary
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int len, b_two;

	if (!b)
		return (0);

	i = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, b_two = 1; len >= 0; len--, b_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			i += b_two;
		}
	}

	return (i);
}
