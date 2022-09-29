#include "main.h"

/**
 * _strlen_recursion - recursive function that return string's length
 * @s: parameter
 * Return: integer
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}

	return (i);

}

