#include "main.h"

/**
 * _strncat - function that append string one to string two and cut come of
 * @dest: first parameter
 * @src: second parameter
 * @n: stops src at this index
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
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

	for (x = 0; x <= len2 && x < n; x++)
	{
		dest[len1 + x] = src[x];
	}
	return (dest);
}
