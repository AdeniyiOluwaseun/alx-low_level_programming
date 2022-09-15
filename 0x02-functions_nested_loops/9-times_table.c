include "main.h"
/**
 * times_table - function prints times table to 9
 * Return: void
 */
void times_table(void)
{
	int x = 0;
	int y;
	int z;

	while (y <= 9)
	{
		z = x * y;

		if (y == 0)
		{
			_putchar('0' + z);
		}
		else if (z < 10)
		{
			_putchar(' ');
			_putchar('0' + z);
		}
		else
		{
			_putchar('0' + z / 10);
			_putchar('0' + z % 10);
		}
		y++;
	}
	_putchar('\n');
	x++;
}
