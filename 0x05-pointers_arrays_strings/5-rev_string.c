#include "main.h"
#include <stdio.h>
/**
 * rev_string - returns string in reverse.
 * @s: parameter.
 *
 * Return: void
 */

void rev_string(char *s)
{
	int x, y;

	x = 0;
	while (s[x])
	{
		x++;
	}

	for (y = 1; y <= x; y++)
	{
		(s[x - y]);
	}
}
