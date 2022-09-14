#include "main.h"

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int row;
	int column;
	int multiply;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			multiply = (row * column);

			if (column == 0)
			{
				_putchar('0' + multiply);
			}
			else if (multiply <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + multiply);
			}
			else if (multiply > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (multiply / 10));
				_putchar('0' + (multiply % 10));
			}
		}
		_putchar('\n');
	}
}
