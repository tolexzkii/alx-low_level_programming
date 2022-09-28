#include "main.h"

/**
 * pow_op - returns square root of a number
 * @n: number
 * @c: iterator
 * Return: square root or -1
 */
int pow_op(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + pow_op(n, c + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: natural sqaure root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (pow_op(n, 2));
}
