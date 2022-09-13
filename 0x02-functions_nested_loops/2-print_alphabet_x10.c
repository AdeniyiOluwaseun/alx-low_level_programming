#include "main.h"
/**
 * print_alphabet_x10 - function prints alphabets ten times
 * Returns: no need for return funtion since the declaration returns void.
 */
void print_alphabet_x10(void)
{
	int a = 0;

	while (a < 10)
	{
		char x = 'a';

		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}
		_putchar('\n');
		a++;
	}
}
