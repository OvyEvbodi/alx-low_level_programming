#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers,
 * using the Linear search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the value searched for, if present,
 * otherwise, -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]", i, array[i]);
		if (array[i] == value)
		{
			return array[i];
		}
	}
	return (-1);
}
