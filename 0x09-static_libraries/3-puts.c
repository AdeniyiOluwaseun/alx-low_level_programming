#include "main.h"
#include <stdio.h>
/**
 * _puts - prints string.
 * @str: string type.
 *
 * Return: void
 */

void _puts(char *str)
{
	int x = 0;

	while (str[x])
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
