#include <stdio.h>
/**
 * main - main block
 * Main : your program should "-Wall gcc" option
 * Description: "You might have to install -m32 gcc option"
 * Return: always 0 (Success)
 */
int main(void)
{
printf("Size of char: %ld byte(s)", sizeof(char));
printf("Size of int: %ld byte(s)", sizeof(int));
printf("Size of long int: %ld byte(s)", sizeof(long int));
printf("Size of long long: %ld byte(s)", sizeof(long long));
printf("Size of float: %ld byte(s)", sizeof(float));
return (0);
}
