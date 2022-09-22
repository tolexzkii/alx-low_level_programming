#include "main.h"

/**
 * leet - encode a string into 1337
 * @s: string
 * Return: pointer to destination
 */
char *leet(char *s)
{
	int c = 0, i;
	int l1[] = {97, 101, 111, 116, 108};
	int l2[] = {65, 69, 79, 84, 76};
	int n[] = {52, 51, 48, 55, 49};

	while (*(s + c) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + c) == l1[i] || *(s + c) == l2[i])
			{
				*(s + c) = n[i];
				break;
			}
		}
		c++;
	}
	return (s);
}
