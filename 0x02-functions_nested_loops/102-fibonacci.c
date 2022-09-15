#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0
 */
int main(void)
{
	int counter;
	int count_to = 50;
	long a = 1;
	long b = 2;

	for (counter = 1; counter <= (count_to / 2); counter++)
	{
		printf("%li %li ", a, b);
		a += b;
		b += a;
	}
	if (count_to % 2 == 1)
		printf("%li", a);
	printf("\n");

	return (0);
}
