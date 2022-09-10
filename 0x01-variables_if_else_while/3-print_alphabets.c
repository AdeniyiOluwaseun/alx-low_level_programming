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
	char n = 'a';
	char u = 'A';

	while (n <= 'z')
	{
		putchar(n);
	n++;
	}
	while (u <= 'Z')
	{
		putchar(u);
		u++;
	}
	putchar('\n');
	return (0);
}
