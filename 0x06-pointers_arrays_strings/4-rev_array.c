#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: the array
 * @n: the number of elements in the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0, j = n;
	int swap;

	for (; i < j / 2; i++)
	{
		swap = a[i];
		a[i] = a[n - 1];
		a[n - 1] = swap;
		n--;
	}
}
