#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: a pointer to the head node of the list
 *
 * Return: a pointer to the reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *prev;
	
	next = NULL;
	prev = NULL;

	if (!head || !(*head))
		return (*head);
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = next;
	}
	*head = prev;
	return (*head);
}
