#include <stdio.h>
/**
 * main - main block
 * Main : your program should "-Wall gcc" option
 * Description: "You might have to install -m32 gcc option"
 * Return: always 0 (Success)
 */
int main(void)
{
printf("Size of char: %c byte(s)", 'c');
printf("Size of int: %d byte(s)", 23);
printf("Size of long int: %ld byte(s)", 21474836);
printf("Size of long long: %lld byte(s)", 9223372036854);
printf("Size of float: %f byte(s)", 4.54);
return (0);
}
