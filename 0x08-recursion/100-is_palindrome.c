#include "main.h"

/**
 * _strlen_recursion -returns the length of a string
 * @s: string
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * compare - compares each character of a string
 * @s: string
 * @a1: small iterator
 * @z1: large iterator
 * Return: 1 or 0
 */
int compare(char *s, int a1, int z1)
{
	if (*(s + a1) == *(s + z1))
	{
		if (a1 == z1 || a1 == z1 + 1)
			return (1);
		return (0 + compare(s, a1 + 1, z1 - 1));
	}
	return (0);
}

/**
 * is_palindrome - returns 1 if a stirng is a palindrome and 0 if not
 * @s: string
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare(s, 0, _strlen_recursion(s) - 1));
}
