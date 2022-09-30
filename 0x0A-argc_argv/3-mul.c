#include <stdio.h>

/**
 * main - multiplies two numbers
 *
 * @argc: the number of arguments passed
 * @argv: a pointer to the array of arguments passed
 *
 * Return: 0 on success,
 * otherwise 1
 */

int main(int argc, char **argv)
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d", (atoi(*(argv + 1)) * (atoi(*(argv + 2))));

	return (0);
}
