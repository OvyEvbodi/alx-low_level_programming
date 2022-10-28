#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 *
 *Return: 1 if it's little endian,
 * otherwise, 0 for big endian architecture
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *byte = (char *) &i;

	return ((int) *byte);
}
