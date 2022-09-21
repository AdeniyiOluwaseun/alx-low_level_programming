#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints string in reverse.
 * @s: parameter.
 *
 * Return: void
 */

void print_rev(char *s)
{
	int x, y;

	x = 0;
	while (s[x])
	{
		x++;
	}
	x = x + 1;

	for (y = 1; y <= x; y++)
	{
		_putchar(s[x - y]);
	}
	_putchar('\n');
}
