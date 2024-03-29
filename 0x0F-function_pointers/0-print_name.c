#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: name of the person
 * @f: pointer to function
 *
 * Return: Nothing.
 */


void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
