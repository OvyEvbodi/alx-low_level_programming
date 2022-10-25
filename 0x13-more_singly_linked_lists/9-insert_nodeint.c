#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: the head node
 * @idx: the index position to insert the new node
 * @n: the data to be stored in the new node
 *
 * Return: a pointer to the new node,
 * NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;

	listint_t *temp, *new, *track;

	temp = *head;
	track = *head;
	new = malloc(sizeof(listint_t));

	if (!(new) || !(head))
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (temp && i < idx)
	{
		*head = temp;
		temp = temp->next;
		i++;
	}
	new->next = temp;
	(*head)->next = new;
	*head = track;
	return (new ? new : NULL);
}

