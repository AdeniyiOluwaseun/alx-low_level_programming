#include <stdio.h>
/**
 * main - main block
 * Main : your program should "-Wall gcc" option
 * Description: "You might have to install -m32 gcc option"
 * Return: always 0 (Success)
 */
int main(void)
{
printf("Size of a char: %d byte(s)\n", sizeof(char));
printf("Size of an int: %d byte(s)\n", sizeof(int));
printf("Size of a long int: %d byte(s)\n", sizeof(long int));
printf("Size of a long long int: %d byte(s)\n", sizeof(long long));
printf("Size of a float: %d byte(s)\n", sizeof(float));
return (0);
}
