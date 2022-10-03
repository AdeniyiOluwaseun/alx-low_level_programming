#include "main.h"

/**
 * main - program that returns name of itself
 * @argc: parameter that stores the count of all cmd input
 * @argv: parameter that stores all cmd input data
 * Return: 0 when successful
 */

int main(int argc, char *argv[])
{
	int count;

	count = 0;

	while (count <= argc)
	{
		printf("%s\n", *argv++);
		count++;
	}
	return (0);
}
