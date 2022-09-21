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
	x = x + 1;

	int y;

	for (y = 0; y <= x; y++)
	{
		_putchar(s[x - y]);
	}
	_putchar('\n');
}
