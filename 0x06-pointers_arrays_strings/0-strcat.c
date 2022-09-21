#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: source
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int c = 0, c1 = 0;

	while (*(dest + c) != '\0')
	{
		c++;
	}

	while (c1 >= 0)
	{
		*(dest + c) = *(src + c1);
		if (*(src + c1) == '\0')
			break;
		c++;
		c1++;
	}
	return (dest);
}
