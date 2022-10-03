#include "main.h"

/**
 * main - program that returns name of itself
 * @argc: parameter that stores the count of all cmd input
 * Return: 0 when successful
 */

int main(int argc, char *argv[])
{
	if (argv)
	{
		printf("%d\n", argc);
	}
	else 
	{
		printf("Zero arguments");
	}
	return (0);
}
