#include "main.h"

/**
 * _strcat - function that append string one to string two
 * @dest: first parameter
 * @src: second parameter
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int l, m, len1, len2, x;

	l = 0;

/*get the length of dest array*/
	while (dest[l] != '\0')
	{
		l++;
	}
	len1 = l;

/* get the length of src array*/
	m = 0;

	while (src[m] != '\0')
	{
		m++;
	}
	len2 = m;

/* iterate through src and append it to dest*/
	x = 0;

	for (x = 0; x <= len2; x++)
	{
		dest[len1 + x] = src[x];
	}
	return (dest);
}
