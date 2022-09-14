#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - function prints number's absolute
 * Return: the value 0
 * @n: parameter is passed
 * Description: n represents int types
 */
int print_to_98(int n)
{
	n = 0;
	while (n <= 98)
	{
		printf("%d, ");
		n++;
	}
	_putchar('\n');
	return (0);
}
