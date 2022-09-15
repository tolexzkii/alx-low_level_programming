#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - put character standard output
 * @c: character argument
 */
int _putchar(char c);

/**
 * _isupper - checks for uppercase character
 * @c: character argument
 *
 * Return: 1 if c is uppercase, else 0
 */
int _isupper(int c);

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: character argument
 *
 * Return: 1 if c is a digit, else 0
 */
int _isdigit(int c);

/**
 * mul - multiplies two integers
 * @a: integer
 * @b: integer
 *
 * Return: product of a and b
 */
int mul(int a, int b);

/**
 * print_numbers - prints the numbers, from 0 to 9
 */
void print_numbers(void);

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 */
void print_most_numbers(void);

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void);

/**
 * print_line - draws a straight line in the terminal
 * @n: integer argument
 */
void print_line(int n);

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: integer argument
 */
void print_diagonal(int n);

/**
 * print_square - prints a square
 * @size: size to draw
 */
void print_square(int size);

/**
 * print_triangle - prints a triangle
 * @size: size to draw
 */
void print_triangle(int size);

#endif
