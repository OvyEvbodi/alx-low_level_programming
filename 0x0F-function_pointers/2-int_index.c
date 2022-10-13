#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integerin an array
 * @array: the array to search
 * @size: the size of the array
 * @cmp: a pointer to the callback function
 * Return: the index where the integer is found
 * otherwise, -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, result = 0;

	if (!array || !cmp)
		return (-1);
	if (size <= 0)
		return (-1);
	while (result == 0 && i < size)
	{
		result = cmp(array[i]);
		i++;
	}
	if (result == 0)
	{
		return (-1);
	}
	i--;
	return (i);
}
