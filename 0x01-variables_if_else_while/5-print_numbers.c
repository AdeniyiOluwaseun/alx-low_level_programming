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
	int n;
	char b;

	n = 0;
	b = '\n';

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	putchar(b);
	return (0);
}
