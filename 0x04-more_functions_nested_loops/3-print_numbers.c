#include "main.h"
/**
 * print_numbers - function prints out numbers from 0 to 9
 * Return: 0 Always
 */
void print_numbers(void)
{
	int x = 48;

	while (x <= 57)
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
	return;
}
