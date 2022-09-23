#include "main.h"

/**
 * _strlen - function that append string one to string two
 * @dest: first parameter
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int len1 = _strlen(dest);
	int len2 = _strlen(src);

	int x;

	for (x = 0; x <= len2; x++)
	{
		dest[len1 + 1] = src[i];
	}
	return(dest);
}
