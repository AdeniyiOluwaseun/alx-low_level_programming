#include "main.h"
/**
 * _abs - function prints number's absolute
 * Return: Always 0.
 * @int: parameter is passed
 */
int_abs(int x)
{
	if (x > 0)
	{
		int p = x * (+1);

		_putchar(p);
	}
	else if (x == 0)
	{
		int e = x * 0;

		_putchar();
	}
	else
	{
		int n = x * (-1);

		_putchar(n);
	}

	return (0);
}
