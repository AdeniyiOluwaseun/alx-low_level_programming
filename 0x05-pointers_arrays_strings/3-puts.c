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
	while (*str++)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
