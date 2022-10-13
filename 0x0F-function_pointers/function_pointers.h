#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
/**
 * function_pointers - header file for prototypes
 * void protypes (void)
 * print_name - prints name
 * _putchar - prints char
 * @c: parameter for _putchar
 * Return: and int
 *
 */

int _putchar(char c);
void print_name(char *name, void (*f)(char *));

#endif /* MAIN_H */
