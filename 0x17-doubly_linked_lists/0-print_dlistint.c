#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 *
 * @h: a pointer to the head node
 *
 * Return: the number of nodes in the doubly linked list.
*/

size_t print_dlistint(const dlistint_t *h)
{
	int num = 0;

	if (h)
	{
		while (h)
		{
			printf("%d\n", h->n);
			num++;
			h = h->next;
		}
	}
	return (num);
}
