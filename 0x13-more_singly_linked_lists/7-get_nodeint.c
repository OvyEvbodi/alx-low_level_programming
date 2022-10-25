#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: the head node
 * @index: the index position of the node to be returned
 *
 * Return: a pointer to the node
 * NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!(head))
		return (NULL);
	while (head && i < index)
	{
		head = head->next;
		i++;
	}
	if (!(head))
		return (NULL);
	else
		return (head);
}

