#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a sqaure matrix of integers
 * @a: pointer
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int i, add1 = 0, add2 = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			add1 += *(a + i);
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			add2 += *(a + i);
	}
	printf("%d, %d\n", add1, add2);
}
