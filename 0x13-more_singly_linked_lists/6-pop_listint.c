#include "lists.h"

/**
 * pop_listint - pops the head node of a linked list
 * @head: list_t list to be freed
 * Return: the data inside the node that was deleted,
 * 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);
	temp = (*head)->next;
	num = (*head)->n;
	free(*head);
	*head = temp;
	return (num);
}