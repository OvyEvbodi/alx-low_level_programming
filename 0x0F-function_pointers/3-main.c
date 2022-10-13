#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: the number of arguments passed
 * @argv: a pointer to an array of arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int (*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operator = get_op_func(argv[2]);
	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", operator(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
