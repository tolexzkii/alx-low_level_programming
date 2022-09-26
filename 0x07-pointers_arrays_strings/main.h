#ifndef _MAIN_H_
#define _MAIN_H_

char *memset(char *s, char b, unsigned int n);
char *memcpy(char *dest, char *src, insigned int n);
char *strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
int _putchar(char);
void print_chessboard(char (*a)[8]);
void print_diagmus(int *a, int size);

#endif
