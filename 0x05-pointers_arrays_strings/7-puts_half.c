#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints 2nd half
 * @str: parameter.
 *
 * Return: void
 */

void puts_half(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		x++;
	}

	for (x /= 2; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
