#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: number argument
 */
void print_times_table(int n)
{
	int row;
	int column;
	int multiply;

	if (n >= 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				multiply = (row * column);
				if (column == 0)
					_putchar('0' + multiply);
				else
				{
					_putchar(',');
					_putchar(' ');
					if (multiply <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + multiply);
					}
					else if (multiply > 9 && multiply < 100)
					{
						_putchar(' ');
						_putchar('0' + (multiply / 10));
						_putchar('0' + (multiply % 10));
					}
					else if (multiply >= 100)
					{
						_putchar('0' + (multiply / 100));
						_putchar('0' + ((multiply / 10) % 10));
						_putchar('0' + (multiply % 10));
					}
				}
			}
			_putchar('\n');
		}
	}
}
