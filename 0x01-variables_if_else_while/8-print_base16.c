#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - main function
 * Description: prints out the alphabets in lower case
 * Return: returns 0 successfully
 */

int main(void)
{
	int n = 48;
	char h = 'a';

	while (n < 58)
	{
		putchar(n);
		n++;
	}
	while (h < 'g')
	{
		putchar(h);
		h++;
	}
	putchar('\n');
	return (0);
}
