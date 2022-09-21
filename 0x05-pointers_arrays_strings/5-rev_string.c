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
	int x, y, z;
	char a;

	for (x = 0; s[x] != '\0'; x++)

	y = 0;
	z = x / 2;

	while (z--)
	{
		a = s[x - y - 1];
		s[x - y - 1] = s[y];
		s[y] = a;
		y++;
	}
}
