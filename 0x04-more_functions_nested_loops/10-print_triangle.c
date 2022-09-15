#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int h;
	int w;
	int draw;

	if (size <= 0)
		_putchar('\n');

	for (h = 1; h <= size; h++)
	{
		for (w = 1; w <= (size - h); w++)
			_putchar(' ');

		for (draw = 1; draw <= h; draw++)
			_putchar('#');

		_putchar('\n');
	}
}
