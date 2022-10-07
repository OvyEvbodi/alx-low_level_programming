#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: a pointer to the memory previously allocated
 * @old_size: the old size
 * @new_size: the new size
 * Return: a pointer to the space in memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *arr;
	char *new_ptr = ptr;
	unsigned int i = 0;

	if (new_size == old_size)
		return (new_ptr);
	if (new_size == 0 && new_ptr != NULL)
		free(new_ptr);
		return (NULL);
	arr = malloc(new_size);
	if (arr == NULL)
		return (NULL);
	if (new_ptr == NULL)
	{
		free(new_ptr);
		arr = malloc(new_size);
		if (arr == NULL)
			return (NULL);
		return (arr);
	}
	/*initialize new array*/
	if (new_size > old_size)
	{
		while (new_ptr[i] && i < old_size)
		{
			arr[i] = new_ptr[i];
			i++;
		}
	}
	else
	{
		while (new_ptr[i] && i < new_size)
		{
			arr[i] = new_ptr[i];
			i++;
		}
	}
	free(new_ptr);
	return (arr);
}
