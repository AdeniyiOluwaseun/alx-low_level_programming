#include "main.h"
/**
 * print_numbers - function prints out numbers from 0 to 9
 * Return: 0 Always
 */

void print_numbers(void)
{
	int x = 0;

	while (x <= 9)
	{
		_putchar('0' + x);
		x++;
	}
	_putchar('\n');
}
