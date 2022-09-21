#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: bytes used from src
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int c = 0, c1 = 0;

	while (*(dest + c) != '\0')
	{
		c++;
	}

	while (c1 < n)
	{
		*(dest + c) = *(src + c1);
		if (*(src + c1) == '\0')
			break;
		c++;
		c1++;
	}
	return (dest);
}
