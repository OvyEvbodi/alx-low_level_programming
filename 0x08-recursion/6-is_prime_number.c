#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: the number to check
 * @factor: the possible factors of n
 *
 * Return: 1 if n is a prime number
 * otherwise 0
 */

int prime_helper(int n, int factor);

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_helper(n, n - 1));
}

/**
 * prime_helper - checks if a number is a prime number
 * @n: the number to check
 * @factor: the possible factors of n
 * Return: 1 if n is a prime number
 * otherwise 0
 */

int prime_helper(int n, int factor)
{
	if (factor == 1)
		return (1);
	if (n % factor == 0 && factor > 1)
		return (0);
	factor--;
	return (prime_helper(n, factor));
}
