#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: the no. of columns in the array
 * @height: the no. of rows in the array
 *
 * Return: a pointer to an array.
 */

int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	int i = 0, j;
	int *arr[height][width];
	int **arr_ptr;

	arr = (int *) malloc(sizeof(int) * width * height);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	arr_ptr = arr;
	return (arr_ptr);
}
