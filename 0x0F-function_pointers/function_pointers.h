#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
/**
 * function_pointers - header file for prototypes
 * void protypes (void)
 * print_name - prints name
 * _putchar - prints char
 *
 */

int _putchar(char c);
void print_name(char *name, void (*f)(char *));

#endif /* MAIN_H */
