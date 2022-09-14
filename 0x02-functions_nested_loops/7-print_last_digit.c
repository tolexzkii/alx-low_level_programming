#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *@n: number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;

	_putchar('0' + (n % 10));

	return (n % 10);
}
