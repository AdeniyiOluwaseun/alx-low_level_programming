#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints every other character.
 * @str: parameter.
 *
 * Return: void
 */

void puts2(char *str)
{
	int x;

	while (str[x] != '\0')
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
		}
		x++;
	}
	_putchar('\n');
}
