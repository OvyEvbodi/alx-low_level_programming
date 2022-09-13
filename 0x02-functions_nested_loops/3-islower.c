#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: input to be checked
 * Return: 1 if input is a lowercase character
 */

int _islower(int c)
{
	if (c >= 'a' && <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
