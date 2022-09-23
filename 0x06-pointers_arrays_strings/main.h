#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

/**
 * main - header file for prototypes
 * _putchar - fucntion that prints character
 * @c: parameter
 * void protypes (void)
 * int prototypes (int)
 */

int _putchar(char c);
void reset_to_98(int *n);
void swap_int(int *a, int *b);
int _strlen(char *s);
void _puts(char *str);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);

/* functions from 0x05*/
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
int _strlen(char *s);

#endif /* MAIN_H */
