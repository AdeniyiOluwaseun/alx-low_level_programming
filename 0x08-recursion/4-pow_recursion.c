#include "main.h"

/**
 * _pow_recursion - recursive function that returns x to the power of y
 * @x: the integer parameter
 * @y: the exponent parameter
 * Return: integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
	{
		return (1);
	}

	else
	{
		x = x * _pow_recursion(x, y - 1);
		return (x);
	}
}
