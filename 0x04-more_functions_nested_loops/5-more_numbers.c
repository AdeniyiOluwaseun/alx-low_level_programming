#include <stdio.h>
#include "main.h"
/**
 * more_numbers - function prints out numbers from 0 to 9
 * Return: void
 */

void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
			{
				putchar((y / 10) + '0');
			}
			putchar((y % 10) + '0');
		}
		putchar(10);
		}
}
