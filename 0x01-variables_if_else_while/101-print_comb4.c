#include <stdio.h>

/**
 * main - Entry, print all possible combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		for (b = (c + 1); b <= '9'; b++)
		{
			for (a = (b + 1); a <= '9'; a++)
			{
				putchar(c);
				putchar(b);
				putchar(a);
				if (c != '7' || b != '8' || a != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
