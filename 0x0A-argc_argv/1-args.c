#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 *
 * @argc: the number of arguments passed
 * @argv: a pointer to the array of arguments passed
 *
 * Return: 0 on success
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
