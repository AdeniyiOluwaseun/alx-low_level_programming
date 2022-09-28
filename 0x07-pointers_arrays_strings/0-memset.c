#include "main.h"

/**
 * _memset - function that fills first n bytes of memory to pointed
 * by s with constant byte b
 * @s: first parameter that holds memory location
 * @b: parameter that holds the variable worked on
 * @n: parameter that specifies bytes of memory
 * Return: pointer to memory s
 */

char *_memset(char *s,const char b, unsigned int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	for (j = 0; j < n; j++)
	{
		_putchar(s[i]);
	}
/*	_putchar('\n');*/
	return (0);
}
