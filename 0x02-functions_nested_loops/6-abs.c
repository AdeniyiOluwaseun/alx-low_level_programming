#include "main.h"
/**
 * _abs - function prints number's absolute
 * Return: Always 0.
 * @int: parameter is passed
 */
int _abs(int x)
{
	if (x > 0)
	{
		_putchar('%d', (x * (+1)));
	}
	else if (x == 0)
	{
		_putchar('%d', (x * 0));
	}
	else
	{
		_putchar('%d', (x * (-1)));
	}
	return (0);
}
