#include <stdio.h>

/**
 * main - Entry print a-z in lowercase and uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z')
	/*print a-z lowercase*/
	{
		putchar(lower);
		lower++;
	}

	while (upper <= 'Z')
	/*print A-Z uppercase*/
	{
		putchar(upper);
		upper++;
	}

	putchar('\n');

	return (0);
}
