#include <stdio.h>

/**
 * main - Entry print all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int af;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	for (af = 'a'; af <= 'f'; af++)
		putchar(af);
	putchar('\n');

	return (0);
}
