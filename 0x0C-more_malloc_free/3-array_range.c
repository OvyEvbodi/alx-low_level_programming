#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the lower limit
 * @max: the higher limit
 *
 * Return: a pointer to the array
 */

int *array_range(int min, int max)
{
	int *arr;
	int i = 0, j = min;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (; j <= max; i++, j++)
	{
		arr[i] = j;
	}
	return (arr);
}
