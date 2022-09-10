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
int n, ld;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
ld = n % 10;
if (ld > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, ld);
}
else if (ld == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, ld);
}
else
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
}
return (0);
}
