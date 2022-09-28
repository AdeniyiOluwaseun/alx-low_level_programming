#include "main.h"

/**
 * _print_rev_recursion - recursive function that prints string's reversed
 * @s: parameter
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\0');
	}
	else
	{
		s++;
		_print_rev_recursion(s);
	}
	if (*s != '\0')
	{
		s--;
		_putchar(*s);
	}
}
