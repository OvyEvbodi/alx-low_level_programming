#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 *
 * @nmemb: the number of elements in the array
 * @size: the size of the individual elemments
 *
 * Return: a void pointer to the space in memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(nmemb * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = 0;
	}
	return (arr);
}
