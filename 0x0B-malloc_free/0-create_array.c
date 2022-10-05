#include "main.h"

/**
 * create_array - a function that creates an array
 * @size: firstt parameter int
 * @c: second parameter char
 * Return: pointer to the array, NULL if it fails
 */


char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
