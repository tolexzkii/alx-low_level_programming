#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char alphabet;

	alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
