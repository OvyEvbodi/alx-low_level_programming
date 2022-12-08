#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 *
 * @head: a pointer to the head node
 * @n: the data for the new node
 *
 * Return: a pointer to the new node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!(new))
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (!(*head))
	{
		(*head) = new;
		return (*head);
	}

	new->next = *head;
	(*head)->prev = new;
	(*head) = new;
	return (new);
}
