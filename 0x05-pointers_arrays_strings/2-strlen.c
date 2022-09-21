#include "main.h"
#include <stdio.h>
/**
 * _strlen - Returns length a string.
 * @s: string for length of.
 *
 * Return: length of @s.
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s++)
		l++;

	return (l);
}
