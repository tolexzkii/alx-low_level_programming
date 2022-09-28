#include "main.h"

/**
 * prime - detects if input number is a prime number
 * @n: number
 * @c: iterator
 * Return: 1 if n is a prime numbe and 0 if n is not a prime number
 */
int prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + prime(n, c + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: number
 * Return: 1 if n is a prime number and 0 if n is not a a prime number
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (prime(n, 2));
}
