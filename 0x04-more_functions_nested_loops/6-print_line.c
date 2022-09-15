#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of character to draw
 */
void print_line(int n)
{
	int t = n;

	for (t = n; t > 0; t--)
		_putchar('_');
	_putchar('\n');
}
