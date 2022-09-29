#include "main.h"

/**
 * _strlen_recursion - recursive function that return string's length
 * @s: parameter
 * Return: integer
 */

int _strlen_recursion(char *s)
{
	static int count;

	if (*s != '\0')
	{
		count++;
		_strlen_recursion(++s);
	}
	else
	{
		return (count);
	}
}
