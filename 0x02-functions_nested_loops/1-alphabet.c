#include "main.h"
/**
 * print_alphabet - function prints out lower case aphabets
 *
 * Return: Always 0
 */
int print_alphabet(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
	return (0);
}
