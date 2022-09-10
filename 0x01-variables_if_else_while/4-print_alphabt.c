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

	while (n <= 'z')
	{
		if (n != 'e' && n != 'q')
		{
			putchar(n);
		}
		n++;
	}
	putchar('\n');
	return (0);
}
