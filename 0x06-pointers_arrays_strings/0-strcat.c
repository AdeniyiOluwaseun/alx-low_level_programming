#include "main.h"

/**
 * _strcat - function that append string one to string two
 * _strlen - function that return the legnth of a string
 * @dest: first parameter
 * @src: second parameter
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int len1 = _strlen(dest);
	int len2 = _strlen(src);

	int x;

	for (x = 0; x <= len2; x++)
	{
		dest[len1 + 1] = src[x];
	}
	return (dest);
}
