#include <stdio.h>

/**
 * main - Entry, print all possible different combinations of two digits
 * seperated by comma and space
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a; /*single numbers*/
	int b; /*tens*/

	for (b = '0'; b <= '9'; b++)
	{
		for (a = (b + 1); a <= '9'; a++)
		{
			putchar(b);
			putchar(a);

			if (b != '8' || a != '9') /*commas*/
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
