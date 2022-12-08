#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 *
 * @h: a pointer to the head node
 *
 * Return: the number of elements in a doubly linked list
*/

size_t dlistint_len(const dlistint_t *h)
{
	int num = 0;

	if (h)
	{
		while (h)
		{
			num++;
			h = h->next;
		}
	}
	return (num);
}
