#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number to check
 * @index: the position to get the bit from
 *
 * Return: the value of the bit,
 * otherwise, -1
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	return ((n & mask) == mask);
}
