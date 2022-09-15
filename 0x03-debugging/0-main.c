#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - main function
 * rand: - randomize every time initiated
 * srand: - really do not know what it does
 * time: - probably does some numerics
 * Description: returns positive, negative or otherwise with n variable.
 * betty style doc for function main goes there
 * use the function 'rand()'
 * Return: returns 0 successfuly
 */
int main(void)
{
	int n = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
