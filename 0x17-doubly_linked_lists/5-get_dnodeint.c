#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 *
 * @head: a pointer to the head node
 * @index: the index of the node to return
 *
 * Return: the node,
 * otherwise, NULL
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (!(head))
		return NULL;
	while (index)
	{
		index--;
		if (head)
			head = head->next;
	}
	return (head);
}
