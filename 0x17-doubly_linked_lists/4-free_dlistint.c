#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: a pointer to the head node
 *
 * Return: void
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	temp = temp->next;
	while (temp)
	{
		temp = temp->next;
		free (temp->prev);
		
	}
}
