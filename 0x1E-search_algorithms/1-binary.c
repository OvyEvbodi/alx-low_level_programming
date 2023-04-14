#include "search_algos.h"

/**
 * binary_search - Searches for a value in an array of integers,
 * using the Binary search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the value searched for, if present,
 * otherwise, -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t start = 0, end = size - 1, pivot = end, i = 0, j = 0;

	while (end - start >= 1)
	{
		for (i = start, j = end; i <= j; i++)
		{
			if (i == j)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}

		pivot = (end - start) / 2 + start;

		if (array[pivot] == value)
			return (pivot);
		else if (array[pivot] > value)
			end = pivot - 1;
		else
			start = pivot + 1;
	}
        if (value > array[end]) { printf("%lu", array[end]); }
	if (value < array[start]) { printf("%lu", array[start]);}
	
	return (-1);
}
