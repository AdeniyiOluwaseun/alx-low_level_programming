#include <stdio.h>
/**
 * main - main block
 * Main : your program should "-Wall gcc" option
 * Description: "You might have to install -m32 gcc option"
 * Return: always 0 (Success)
 */
int main(void)
{
printf("Size of char: %ld byte(s)\n", sizeof(char));
printf("Size of int: %ld byte(s)\n", sizeof(int));
printf("Size of long int: %ld byte(s)\n", sizeof(long int));
printf("Size of long long: %ld byte(s)\n", sizeof(long long));
printf("Size of float: %ld byte(s)\n", sizeof(float));
return (0);
}
