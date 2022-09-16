#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - function prints out numbers from 0 to 9
 * Return: 0 Always
 */

void print_most_numbers(void)
{
	char x = '0';

	while (x <= '9')
	{
		if (x != '2' && x != '4')
		{
			putchar(x);
		}
		x++;
	}
	putchar('\n');
}

