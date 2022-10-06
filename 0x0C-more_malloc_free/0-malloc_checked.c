#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked -  allocates memory using malloc
 *
 * @b: the number of bytes to allocate
 *
 * Return: a pointer to the allocated space in memory
 */

void *malloc_checked(unsigned int b)
{
	void *memory = malloc(b);
	return (memory);
}
