#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: segement
 * @accept: bytes accepted
 * Return: to the accepted bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, bl;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		bl = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				bl = 0;
				break;
			}
		}
		if (bl == 1)
			break;
	}
	return (i);
}
