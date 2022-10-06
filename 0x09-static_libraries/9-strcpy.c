#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies one string to another
 * @dest: First parameter.
 * @src: Second paraeter.
 *
 * Return: first parameter
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';
	return (dest);
}
