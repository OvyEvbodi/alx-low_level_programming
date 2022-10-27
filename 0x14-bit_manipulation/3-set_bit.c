#include "main.h"

/**
 * set_bit - returns the value of a bit at a given index
 * @n: the number to check
 * @index: the position to set the bit
 *
 * Return: 1 on success
 * otherwise, -1
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n = *n | mask;
	return (1);
}
