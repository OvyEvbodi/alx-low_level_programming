#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: a pointer to the memory previously allocated
 * @old_size: the old size
 * @new_size: the new size
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *arr;
	unsigned int = 0;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
		return (NULL);
	arr = malloc(new_size);
	if (arr == NULL)
		return (NULL);
	if (ptr == NULL)
	{
		free(ptr);
		exit(EXIT_SUCCESS);
	}
	/*initialize new array*/
	if (new_size > old_size)
	{
		while (ptr && i < old_size)
		{
			arr[i] = ptr;
			ptr++;
			i++;
		}
	}
	else
	{
		while (ptr && i < new_size)
		{
			arr[i] = ptr;
			ptr++;
			i++;
		}
	}
	free(ptr);
	return (arr);
}
