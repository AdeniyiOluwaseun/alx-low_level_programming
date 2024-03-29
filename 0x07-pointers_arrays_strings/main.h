#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

/**
 * main - header file for prototypes
 * void protypes (void)
 * int prototypes (int)
 */

int _putchar(char c);
char *_memset(char *s, const char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);

#endif /* MAIN_H */
