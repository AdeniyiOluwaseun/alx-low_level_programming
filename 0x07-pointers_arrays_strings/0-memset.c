#include "main.h"

/**
 * _memset - function that fills first n bytes of memory to pointed
 * by s with constant byte b
 * @s: first parameter that holds memory location
 * @b: parameter that holds the variable worked on
 * @n: parameter that specifies bytes of memory
 * Return: pointer to memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
