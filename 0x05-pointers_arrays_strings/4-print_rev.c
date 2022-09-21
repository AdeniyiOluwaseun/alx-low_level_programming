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

	int y, z;

	for (y = 1; y <= x; y++)
	{
		z = x - y;
		_putchar(s[z]);
	}
	_putchar('\n');
}
