#include <stdio.h>
#include "main.h"

/**
 * print_square - code prints square with #
 * @size: parameter
 * Return: void
 */

void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < (size - 1); y++)
			{
				putchar('#');
			}

			putchar('#');
			putchar('\n');
		}
	}
}
