#include "main.h"

/**
 *_islower - checks for lowercase character
 *@c: character being checked
 *
 *Return: 1 if lowercase, else 0 if uppercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
