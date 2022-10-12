#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array
 * @array: the array
 * @size: the size of the array
 * @action: a pointer to the callback function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (!array || !action)
		exit(EXIT_SUCCESS);

	for (; i < size; i++)
	{
		action(array[i]);
	}
}
