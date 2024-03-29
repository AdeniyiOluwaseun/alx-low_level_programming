#include "main.h"
/**
 * print_sign - function prints number sign
 * Return: 1 if true and 0 if false
 * @n: parameter is passed
 */
int print_sign(int n)
{
	int store;

	if (n > 0)
	{
		store = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		store = 0;
		_putchar('0');
	}
	else
	{
		store = -1;
		_putchar('-');
	}

	return (store);
}
