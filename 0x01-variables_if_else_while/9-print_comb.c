#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - main function
 * Description: prints all single numbers of base 10 with comma and space
 * in ascending order
 * Return: returns 0 successfully
 */

int main(void)
{
	int n, h, i;

	n = 48;
	h = ',';
	i = ' ';

	while (n < 58)
	{
		putchar(n);
		if (n != 58)
		{
			putchar(h);
			putchar(i);
		}
		n++;
	}
	putchar('\n');
	return (0);
}
