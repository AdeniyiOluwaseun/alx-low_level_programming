#include "function_pointers.h"

/**
 * array_iterator - function that executes the code of other given function
 * @size: size of the array
 * @array: name of the array
 * @action: action function
 *
 * Return: Nothing.
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array && action)
		for (x = 0; x < size; x++)
			action(array[x]);
}
