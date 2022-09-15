#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: the character to check
 *
 * Return: 1 if c is a digit between 0 and 9,
 * otherwise, 0
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
