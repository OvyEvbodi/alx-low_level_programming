#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 *
 * @head: a pointer to the head node
 * @n:the data of the new node
 *
 * Return: a pointer to the new node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (!(new))
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (!(*head))
	{
		*head = new;
		return (*head);
	}
	while (temp->next)
		temp = temp->next;

	new->prev = temp;
	temp->next = new;
	return (*head);
}
