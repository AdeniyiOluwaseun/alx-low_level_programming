#include <stdio.h>
#include "main.h"


/**
 * more_numbers - Print numbers between 0 to 14 incl.
 *
 * Return: Void.
 */
void more_numbers(void)
{
	char a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++;)
		{
			if (b >= 10)
			{
				_putchar(b / 10 + '0');
			}
			_putchar(b % 10 + '0');
		}
	_putchar('\n');
	}
}

