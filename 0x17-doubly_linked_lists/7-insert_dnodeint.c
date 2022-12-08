#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: a pointer to the head node
 * @idx: the index at which the new node is to be inserted
 * @n: the data of the new node
 *
 * Return: a pointer to the new node,
 * otherwise, NULL
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *h;

	if (!(new))
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (!(*h))
	{
		*h = new;
		return (*h);
	}
	while(idx > 1)
	{
		if (temp)
			temp = temp->next;
		else
			break;
		idx--;
	}
	new->next = temp->next;
	new->prev = temp;
	temp->next->prev = new;
	temp->next = new;
	return (new);
}
