#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints diagonal
 * @n: parameter
 * Return: void
 */

void print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				putchar(' ');
			}

			putchar('\\');

			if (x == (n - 1))
			{
				continue;
			}
			putchar('\n');
		}
	}
	putchar('\n');
}
