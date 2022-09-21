#include "main.h"
#include <stdio.h>
/**
 * _print_rev - prints string in reverse.
 * @s: parameter.
 *
 * Return: void
 */

void _print_rev(char *s)
{
	int x = 0;

	while (s[x])
	{
		x++;
	}
	while (x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
