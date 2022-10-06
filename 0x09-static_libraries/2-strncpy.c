#include "main.h"
#include <stdio.h>
/**
 * _strncpy - copies one string to another
 * @dest: First parameter.
 * @src: Second paraeter.
 * @n: third parameter
 *
 * Return: first parameter
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; src[x] != '\0' && src[x] < n; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';
	return (dest);
}
