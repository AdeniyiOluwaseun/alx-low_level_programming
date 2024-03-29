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
	if (n <= 98)
	{
		while (n != 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("%d\n", 98);
	}
	else if (n >= 98)
	{
		while (n != 98)
		{
			printf("%d, ", n);
			n = n - 1;
		}
		printf("%d\n", 98);
	}
	else
	{
		printf("%d\n", 98);
	}
	return (0);
}
