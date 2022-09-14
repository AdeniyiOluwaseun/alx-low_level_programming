#include "main.h"
/**
 * print_last_digit - function prints number's absolute
 * Return: Not always 0
 * @x: parameter is passed
 */
int print_last_digit(int x)
{
	int xy;

	if (x < 0)
	{
		xy = -1 * (x % 10);
	}
	else 
	{
		xy = n % 10;
	}
	return (xy);
}
