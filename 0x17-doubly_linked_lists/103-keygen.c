#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * fd - finds the largest number
 * @usr_n: username
 * @len: username length
 * Return: the largest number
 */
int fd(char *usr_n, int len)
{
	int ch;
	int vch;
	unsigned int r_num;

	ch = *usr_n;
	vch = 0;

	while (vch < len)
	{
		if (ch < usr_n[vch])
			ch = usr_n[vch];
		vch += 1;
	}

	srand(ch ^ 14);
	r_num = rand();

	return (r_num & 63);
}

/**
 * fd1 - multiplies each character of the username
 * @usr_n: username
 * len: length of username
 * Return: multiplied character
 */
int fd1(char *usr_n, int len)
{
	int ch;
	int vch;

	ch = vch = 0;

	while (vch < len)
	{
		ch = ch + usr_n[vch] * usr_n[vch];
		vch += 1;
	}

	return (((unsigned int)ch ^ 239) & 63);
}

/**
 * fd2 - generates random characters
 * @usr_n: username
 * Return: random character
 */
int fd2(char *usr_n)
{
	int ch;
	int vch;

	ch = vch = 0;

	while (vch < *usr_n)
	{
		ch = rand();
		vch += 1;
	}

	return (((unsigned int) ch ^ 229) & 63);
}

/**
 * main - Entry
 * @argc: arguments counter
 * @argv: arguments vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	char keygen[7];
	int len, ch, vch;
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };
	(void) argc;

	for (len = 0; argv[1][len]; len++)
		;

	keygen[0] = ((char *)alph)[(len ^ 59) & 63];

	ch = 1;
	vch = 0;
	while (vch < len)
	{
		ch = argv[1][vch] * ch;
		vch = vch + 1;
	}
	keygen[2] = ((char *)alph)[(ch ^ 85) & 63];

	keygen[3] = ((char *)alph)[fd(argv[1], len)];

	keygen[4] = ((char *)alph)[fd1(argv[1], len)];

	keygen[5] = ((char *)alph)[fd2(argv[1])];
	keygen[6] = '\0';
	for (ch = 0; keygen[ch]; ch++)
		printf("%c", keygen[ch]);
	return (0);
}
