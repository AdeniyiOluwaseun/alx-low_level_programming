#include "main.h"
/**
 * print_last_digit - function prints number's absolute
 * Return: Not always 0
 * @x: parameter is passed
 * Description: xy is an local parameter
 */
int print_last_digit(int x)
{
	int xy;

	if (x < 0)
	{
		xy = -1 * (x % 10);
		_putchar(xy);
	}
	else
	{
		xy = x % 10;
		_putchar(xy);
	}
	return (xy);
	_putchar(xy);
}
