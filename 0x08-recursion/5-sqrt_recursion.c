#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: the number
 * @s_root: the guess, starts from 1
 * Return: the square root of n
 */
int _sqrt_helper(int n, int s_root);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 1));
}

/**
 * _sqrt_helper - helper function to find square root factor
 * @n: the number from the _sqrt_recursion function
 * @s_root: the guess, starts from 1
 *
 * Return: the square root of n
 */

int _sqrt_helper(int n, int s_root)
{
	if (s_root > n)
		return (-1);
	if (s_root * s_root == n)
	{
		return (s_root);
	}
	s_root++;
	return (_sqrt_helper(n, s_root));
}
