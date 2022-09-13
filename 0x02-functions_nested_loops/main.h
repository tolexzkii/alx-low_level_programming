#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _putchar - print the character
 *@c: character to be printed
 * Return: 0 (Success)
 */
int _putchar(char c);

/**
 * print_alphabet - print the alphabet in lowercase
 */
void print_alphabet(void);

/**
 * print_alphabet_x10 - print 10 times the alphabet in lowercase
 */
void print_alphabet_x10(void);

/**
 * _islower - checks for lowercase character
 * @c: character to be checked
 * Return: int
 */
int _islower(int c);

/**
 * _isalpha - checks for alphabetic charater
 * @c: charater to be checked
 * Return: int
 */
int _isalpha(int c);

/**
 * print_sign - prints the sign of a number
 * @n: number, sign to be printed
 * Return: int
 */
int print_sign(int n);

/**
 * _abs - computes the absolute value os an integer
 * Return: absolute value int
 */
int _abs(int);

/**
 * print_last_digit - printd thr last digit of a number
 * Return: int
 */
int print_last_digit(int);

/**
 * jack_bauer - prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59
 */
void jack_bauer(void);

/**
 * times_table - prints the 9 times table
 */
void times_table(void);

/** add - adds two integers 
 * Return: result of addition int
 */
int add(int, int);

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: integer
 */
void print_to_98(int n);

#endif
