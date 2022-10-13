#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - adds two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subract two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the result for non-zero integer division,
 * otherwise nothing
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - gets the remainder of two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the result for non-zero integer division,
 * otherwise nothing
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
