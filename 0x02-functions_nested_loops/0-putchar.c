#include "main.h"

/**
 *  main - function that begins
 *  Return: 0 successfully
 *  Description: using _putchar to print out all the characters
 */

int main(void)
{
	char mess[] = "_putchar";
	int counter = 0;

	while (counter < 8)
	{
	_putchar(mess[counter]);
	counter++;
	}
	_putchar('\n');
	return (0);
}
