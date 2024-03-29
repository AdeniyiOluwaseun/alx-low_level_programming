#include <stdlib.h>
#include "main.h"

/**
 * main - program that returns name of itself
 * @argc: parameter that stores the count of all cmd input
 * @argv: parameter that stores all cmd input data
 * Return: 0 when successful
 */

int main(int argc, char *argv[])
{
	int x, y;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		y = 1;

		for (x = 1; x < 3; x++)
		y *= atoi(argv[x]);

		printf("%d\n", y);
	}

	return (0);
}
