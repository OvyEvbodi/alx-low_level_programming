#include <stdio.h>

/**
 * main - prints all arguments it receives
 *
 * @argc: the number of arguments passed
 * @argv: a pointer to the array of arguments passed
 *
 * Return: 0 on success
 */

int main(int argc __attribute__((unused)), char **argv)
{
	int i = 0;

	for (; argv[i]; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
